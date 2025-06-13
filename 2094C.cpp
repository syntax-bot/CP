#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int testcase = 0; testcase < t; testcase++){
        int n;
        cin >> n;
        int arr[n][n];
        bool present[2*n]={0};

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin >> arr[i][j];
                present[arr[i][j]-1]=1;
            }
        }

        for(int i=0;i<(2*n);i++){
            if(!present[i]){
                cout<<(i+1)<<" ";
                break;
            }
        }

        for (int i = 0; i < n; i++){
            cout <<arr[0][i]<<" ";
        }

        for (int i = 1; i < n; i++){
            cout <<arr[i][n-1]<<" ";
        }
        cout<<endl;
    }
    return 0;
}