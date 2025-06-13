#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int set[n];

    for (int i = 0; i < n; i++){
        cin >> set[i];
        if(set[i]!=(-1)){
            set[i]--;
        }
    }

    // measure max depth
    int depth[n]={0};

    for(int i=0;i<n;i++){
        if (depth[i] != 0) continue;
        int j=i;
        stack<int> st;
        
        while (depth[j]==0)
        {
           st.push(j);

           if(set[j]==(-1))break;

           j=set[j];

        }
        
        
        

        int preDep=depth[j];     //precalculated depth

        int newDep=st.size();    //new added depth

        int k=1;                 //count every level

        while (!st.empty() && k<=newDep)
        {
           int temp=st.top();
           st.pop();
           depth[temp]=k+preDep;

           k++;
        }
        


    }

    int maxGrp=depth[0];
    for (int i = 1; i < n; i++)
    {
        maxGrp=max(maxGrp,depth[i]);
    }
    
    cout << maxGrp;
    
    return 0;
}