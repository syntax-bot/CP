#include <iostream>
#include <string>
using namespace std;

int main(){
    string position;
    cin >> position;

    int cons_count=0;
    char lastChar='0';

    int len=position.length();

    for (int i = 0; i < len; i++)
    {
        if(lastChar==position[i]){
            cons_count++;
            if(cons_count==7){
                cout<<"YES";
                goto endP;
            }
        }
        else{
            lastChar=position[i];
            cons_count=1;
        }
    }
    cout<<"NO";

    endP:


    return 0;
    
    
}