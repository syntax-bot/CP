#include <iostream>
#include <stack>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int testcase = 0; testcase < t; testcase++){
        int n ;
        cin >> n;
        int arr[n];

        stack<int> st;

        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }

        st.push(-1);
        for(int i = 0; i < (n-1); i++){
            if(st.top()<arr[i])st.push(arr[i]);
            else st.push(st.top());
        }

        long long  sum=0;
        for (int i = n-1; i >=0; i--){
            int leftMax=st.top();
            st.pop();

            if (leftMax<arr[i])leftMax=arr[i];

            sum+=leftMax;
            cout<<sum<<" ";
            sum-=leftMax;

            sum+=arr[i];
        }
        cout<<endl;
    }
    return 0;
}