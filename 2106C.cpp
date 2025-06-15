#include <iostream>
#include <set>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int testcase = 0; testcase < t; testcase++){
        int n ,k;
        cin >>n >>k;
        int a[n];
        int b[n];

        for (int  i = 0; i < n; i++)cin >> a[i];

        bool bEmpty=1;

        for (int i = 0; i < n; i++){
            cin >> b[i];
            if(b[i]!=(-1))bEmpty=0;
        }

        if(bEmpty){
            //b full empty
            long long mini=a[0],maxi=a[0];
            for (int i = 0; i < n; i++){
                if(a[i] < mini) mini = a[i];
                else if(a[i] > maxi) maxi = a[i];
            }

            cout<<mini+k-maxi+1<<endl;

        }
        else{
            bool possible=1;
            set<int> uniqueEle;
            for (int i = 0; i < n; i++){
                if(b[i]!=(-1)){
                    uniqueEle.insert(a[i]+b[i]);
                }
            } 
            
            if (uniqueEle.size()!=1)possible=0;

            int sum=*(uniqueEle.begin());

            for (int i = 0; i < n && possible; i++){
                if(b[i]==(-1) && ((sum-a[i])>k || sum-a[i]<0)){
                    possible=0;
                }
            }

            if (possible)cout<<1<<endl;
            else cout<<0<<endl;
            
        }
        

        

    }
    return 0;
}