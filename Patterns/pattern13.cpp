#include <iostream>
using namespace std;

// Pattern
// 1
// 2 3
// 4 5 6

int main(){
    int n;
    cin >> n;

    int val = 1;
    for(int i=1; i<=n; ++i){
        for(int j=1; j<=i; ++j){
            cout << val << " ";
            val++;
        }
        cout << '\n';
    }

    return 0;
}