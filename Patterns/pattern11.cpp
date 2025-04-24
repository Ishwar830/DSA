#include <iostream>
using namespace std;

// Pattern
// 1
// 0 1
// 1 0 1
// 0 1 0 1

int main(){
    int n;
    cin >> n;

    int val = 1;

    for(int i=1; i<=n; ++i){
        int temp = val;
        for(int j=1; j<=i; ++j){
            cout << temp << ' ';
            temp = 1 - temp;
        }
        cout << '\n';
        val = 1 - val;
    }

    return 0;
}