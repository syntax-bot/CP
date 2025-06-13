#include <iostream>
#include <vector>

using namespace std;

vector<int> getDivisor(long long n){
    vector<int> divisors;
    for(long long i=1;i*i<=n;i++){
        if (n%i==0)divisors.push_back(int(i));
    }
    return divisors;
}

int maxConsecutive(vector<int> * divisors){
    int last=0;
    int n=divisors->size();

    int maxDiv=0;
    int curMax=0;
    for(int i=0;i<n;i++){
        if((*divisors)[i]==last+1){
            curMax++;
        }
        else{
            last=(*divisors)[i];
            curMax=1;
        }
        maxDiv=max(maxDiv,curMax);
    }
    return maxDiv;

}
int main(){
    int t;
    cin >> t;
    long long n[t];

    vector<int> intervals(t);

    for(int i=0;i<t;i++){
        cin >> n[i];
        vector<int> divisors=getDivisor(n[i]);
        int interval=maxConsecutive(&divisors);
        intervals[i]=interval;
    }

    for(auto i:intervals){
        cout<<i<<endl;
    }
    return 0;

}