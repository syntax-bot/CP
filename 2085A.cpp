#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int testcase = 0; testcase < t; testcase++){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        string rev = s;
        reverse(rev.begin(), rev.end());

        bool flag=1;    //flag to check all if all same
        for (int i = 1; s[i]!='\0'; i++){
           if(s[i-1]!=s[i])flag=0;
        }
        
        if (flag || (k==0 && s>=rev))cout << "NO"<<endl;
        else cout << "YES"<<endl;
    }
    return 0;
}




