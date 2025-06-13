#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long n, k ,temp;

    cin >> n >> k;

    temp=(n+1)/2;

    if (k > temp){
        cout << (2 * (k - temp));
    }
    else{
        cout << (2 * k - 1);
    }
    return 0;
}