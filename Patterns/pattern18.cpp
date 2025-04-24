#include <iostream>
using namespace std;

// Pattern
// 3 3 3 3 3
// 3 2 2 2 3
// 3 2 1 2 3
// 3 2 2 2 3
// 3 3 3 3 3

int main(){
    int n;
    cin >> n;

    for(int i=0; i<2*n-1; ++i){
        for(int j=0; j<2*n-1; ++j){
            int cell_val = max(max(n-j, n-i), max(n-(2*n-2-i), n-(2*n-2-j)));
            cout << cell_val << " ";
        }
        cout << "\n";
    }
    return 0;
}