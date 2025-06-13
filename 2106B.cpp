#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int testcase = 0; testcase < t; testcase++){
        int n,x;
        cin >> n >>x;

        for (int i = 0; i < x; i++)cout<<i<<" ";
        
        for (int i = x+1; i < n; i++)cout<<i<<" ";
        
        if(x!=n)cout<<x<<endl;
        else cout <<endl;

    }
    return 0;
}