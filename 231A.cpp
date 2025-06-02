#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int problemCount=0;
    for(int i=0;i<n;i++){
        bool Petya, Vasya ,Tonya;
        cin >> Petya >> Vasya >> Tonya;
        if((Petya & Vasya) | (Petya & Tonya) | (Vasya & Tonya)){
            problemCount++;
        }
    }
    cout<<problemCount;

    return 0;
}