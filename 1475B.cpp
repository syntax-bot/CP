#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    int n[t];
    for (int i = 0; i < t; i++)cin >>n[i];

    for(int i=0;i<t;i++){
        int remainder=n[i]%2020;
        int quotient=n[i]/2020;

        if(quotient>=remainder){
            cout << "YES"<< endl;
        }
        else{
            cout << "NO"<< endl;
        }
    }
    
    return 0;

}