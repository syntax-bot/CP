#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin >> t;
    string s[t];
    int n[t];
    int k[t];
    for (int i = 0; i < t; i++){
        cin >>n[i]>>k[i]>>s[i];
    }

    for(int i=0;i<t;i++){
        int count0=0,count1=0;
        for(int j=0;j<n[i];j++){
            if(s[i][j]=='0'){
                count0++;
            }
            else{
                count1++;
            }
        }
        int misMatch=n[i]/2-k[i];
        if(count0>=misMatch && count1>=misMatch && !((count0-misMatch)&1) && !((count1-misMatch)&1) ){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;

}