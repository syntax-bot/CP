#include <iostream>
#include <string>
using namespace std;

int main(){
    string p;
    cin >> p;

    for (int i = 0;p[i]!='\0'; i++)
    {
        if(p[i]=='H' | p[i]=='Q' | p[i]=='9'){
            cout<<"YES";
            goto label;
        }
    }
    cout<<"NO";
    label:
    return 0;
    
}