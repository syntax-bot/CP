#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;

    int coins[n];
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        cin>>coins[i];
        sum+=coins[i];
    }

    sort(coins,coins+n);
    
    int coinCount=0;
    int subSum=0;
    for(int i=n-1;i>=0 && sum>=subSum;i--){
        subSum+=coins[i];
        sum-=coins[i];
        coinCount++;
    }

    cout << coinCount;
    return 0;
}