#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int m,n;
    cin >> n >> m;
    int tv[n];
    for (int i = 0; i < n; i++)cin >>tv[i];

    sort(tv,tv+n);

    int maxProfit=0;
    for(int i=0;i<m && tv[i]<0;i++)maxProfit+=tv[i];
    
    cout<<abs(maxProfit)<<endl;
    return 0;

}