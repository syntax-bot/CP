#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int testcase = 0; testcase < t; testcase++){
        int n;
        cin >> n;
        int arr[n];

        for(int i=0;i<n;i++)cin >> arr[i];

        int more=0;
        for (int i = 1; i < n; i++)more+=(abs(arr[i])>=abs(arr[0]));

        if(more>=(n-1)/2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        cout<<(n-1)/2<<endl;

    }
    return 0;
}