#include <iostream>
using namespace std;

int main(){
    int w;
    cin >> w;
    if(!(w&1) && w!=2){   //edge case 2 can't be divided into 2 evens
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;

}