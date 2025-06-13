#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;



int main(){
    int t;
    cin >> t ;
    int n[t];
    for (int i = 0; i < t; i++)cin >> n[i];

    for (int i = 0; i < t; i++)
    {
        int nCur=n[i];
        int count3=0 ,count2=0;
        bool notDivisible=0;
        while(nCur>1){
            if(nCur%2==0){
                count2++;
                nCur/=2;
            }
            else if(nCur%3==0){
                count3++;
                nCur/=3;
            }
            else{
                notDivisible=1;
                break;
            }
        }

        if(!notDivisible && count3>=count2){
            cout <<count3+count3-count2<<endl;
        }
        else if(notDivisible || (!notDivisible && count3<count2)){
            cout << -1<<endl;
        }
        else{
            cout<<0<<endl;
        }
        
    }
    return 0;

}