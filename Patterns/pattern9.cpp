#include <iostream>
using namespace std;

// Pattern
//   *
//  ***
// *****
// *****
//  ***
//   *

int main(){
    int n;
    cin >> n;

    int cnt = 1;
    for(int i=1; i<=2*n; ++i){
        for(int j=0; j<n-cnt; ++j){
            cout << ' ';
        }
        for(int j=0; j<2*cnt-1; ++j){
            cout << '*';
        }
        cout << '\n';
        
        if(i == n) continue;
        if(i > n) cnt--;
        else cnt++;
    }
    return 0;
}