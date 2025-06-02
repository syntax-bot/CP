#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count=0;
    for(int i=0;i<n;i++){
        string temp;
        cin >> temp;
        if(temp=="++X" | temp=="X++"){count++;}
        else{count--;}
    }
    cout << count;
    return 0;
}