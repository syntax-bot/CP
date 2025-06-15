#!/bin/bash

#cleanup to avoid stray .exit_code on early failures:
trap "rm -f .exit_code" EXIT


# Check if a filename is passed
if [ $# -ne 1 ]
then
    echo "INPUT ONE C++ FILE ONLY"
    exit 1
fi


# Get filename
FILENAME="$1"

# If the file doesn't exist, try adding .cpp
if [ ! -f "$FILENAME" ]
then
    if [ -f "$FILENAME.cpp" ]
    then
        FILENAME="$FILENAME.cpp"
    else
        echo "File '$1' not found (with or without .cpp extension)"
        exit 1
    fi
fi


# Compile the C++ file, redirecting errors to error.txt
g++ "$FILENAME" 2> error.txt


# Check if compilation was successful then
if [ $? -ne 0 ]
then
    echo "Compilation failed. Check error.txt for details."
    exit 1
else
    
    # Run the program with timeout and capture real return code
    (
        timeout 2s ./a.out < input.txt > output.txt
        echo $? > .exit_code
    ) 2>> error.txt

    if [ -f .exit_code ]
    then
        exit_code=$(cat .exit_code)
        rm .exit_code
    else  
        exit_code=124  # assume timeout or crash
    fi


    # Check for specific runtime issues

    if [ $exit_code -eq 124 ]
    then
        echo "Program terminated (timeout)"
        echo "Program terminated: possible infinite loop (timeout)" >> error.txt
    elif [ $exit_code -ge 128 ]
    then
        signal=$((exit_code - 128))
        echo "Program crashed with signal $signal"
        echo "Program crashed with signal $signal" >> error.txt
        case $signal in
            11) echo "Segmentation fault (SIGSEGV)" >> error.txt ;;
            6)  echo "Aborted (SIGABRT)" >> error.txt ;;
            8)  echo "Floating point exception (SIGFPE)" >> error.txt ;;
            *)  echo "Terminated by unknown signal" >> error.txt ;;
        esac
    elif [ $exit_code -ne 0 ]
    then
        echo "Program exited with non-zero status $exit_code" >> error.txt
        echo "Program exited with code $exit_code"
    else
        echo "Program executed. Output saved to output.txt, errors (if any) in error.txt"
    fi
fi
