#include <iostream>
using namespace std;

// Pattern
// *
// **
// ***
// **
// *

int main(){
    int n;
    cin >> n;

    int cnt = 1;
    for(int i=1; i<=2*n-1; ++i){
        for(int j=0; j<cnt; ++j){
            cout << '*';
        }
        cout << '\n';
        
        if(i >= n) cnt--;
        else cnt++;
    }
    return 0;
}