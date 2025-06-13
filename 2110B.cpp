#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int testcase = 0; testcase < t; testcase++){
        string s;
        cin >> s;
        
        int count=0;
        stack<char> st;
        for (int i = 0; s[i]!='\0'; i++){
            if(s[i]=='(')st.push('(');
            else st.pop();
            
            if(st.empty())count++;
        }
        if(count>1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}