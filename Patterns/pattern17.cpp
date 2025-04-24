#include <iostream>
using namespace std;

// Pattern
//    A
//   ABA
//  ABCBA
// ABCDCBA

int main(){
    int n;
    cin >> n;

    for(int i=1; i<=n; ++i){
        for(int j=0; j<n-i; ++j){
            cout << ' ';
        }

        char val = 'A'-1;
        for(int j=0; j<2*i-1; ++j){
            if(2*j > (2*i-1)) val--;
            else val++;
            cout << val;
        }
        cout << '\n';
    }
    return 0;
}