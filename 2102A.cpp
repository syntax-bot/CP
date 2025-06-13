#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int testcase = 0; testcase < t; testcase++){
        int n,m,p,q;
        cin >>n>>m>>p>>q;

        if((n%p==0 && (n/p)*q==m)   || n%p)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}