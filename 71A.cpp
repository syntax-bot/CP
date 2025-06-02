#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    string words[n];

    for(int i=0;i<n;i++){
        cin >> words[i];
    }

    for(int i=0;i<n;i++){
        int temp=words[i].length();
        if(temp>10){
            cout <<words[i][0]+to_string(temp-2)+words[i][temp-1]<< "\n" ;
        }
        else{
            cout <<words[i]<<"\n";
        }
    }

}