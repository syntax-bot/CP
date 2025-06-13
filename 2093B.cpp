#include <iostream>
#include <string> 
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int testcase = 0; testcase < t; testcase++){
        string s;
        cin >> s;
        int remove=0;
        int i=s.length()-1;
        //remove trailing zeros     
        while(s[i]=='0'){
            remove++;
            i--;
        }

        i--;   //skiped last number
        while(i>=0){
            if(s[i]!='0')remove++;

            i--;
        }

        cout<<remove<<endl;

    }
    return 0;
}