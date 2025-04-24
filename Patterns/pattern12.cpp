#include <iostream>
using namespace std;

// Pattern
// 1    1
// 12  21
// 123321

int main(){
    int n;
    cin >> n;

    for(int i=1; i<=n; ++i){
        int val = 0;
        for(int j=1; j<=2*n; ++j){
            if(j == n+1) val = n;
            else if(j > n) val--;
            else val++;

            if(val > i) cout << ' ';
            else cout << val;
        }
        cout << '\n';
    }

    return 0;
}