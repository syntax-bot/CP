#include <iostream>
#include <stack>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int testcase = 0; testcase < t; testcase++){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];

        stack<int> st;
        st.push(arr[0]);
        int i=1;

        while(i<n){
            if(arr[i]>(st.top()+1))st.push(arr[i]);
            i++;
        }

        cout<<st.size()<<endl;
    }
    return 0;
}