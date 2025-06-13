#include <iostream>
#include  <algorithm>
#include  <cmath>
using namespace std;

int main(){
    int t;
    cin >> t;
    int *arr[t];
    int n[t],k[t];
    for(int i=0;i<t;i++){
        cin >> n[i] >> k[i];

        arr[i]=new int[n[i]];
        
        for(int j=0;j<(n[i]);j++){
            cin >> arr[i][j];
        }
    }


    for (int  i = 0; i < t; i++){
        sort(arr[i],arr[i]+n[i]);
        
        
        int maxCount=1;
        int curCount=1;
        for(int j=1;j<(n[i]);j++){
            if(abs(arr[i][j]-arr[i][j-1])<=k[i]){
                curCount++;
            }
            else{
                curCount=1;
            }
            maxCount=max(maxCount,curCount);
        }
        cout<<n[i]-maxCount<<endl;
    }
    


    for (int i = 0; i < t; ++i) {
        delete[] arr[i];  // free each row
    }
    return 0;

}