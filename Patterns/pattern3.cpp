#include <iostream>
using namespace std;

// Pattern
// 1
// 12
// 123
// 1234

int main(){
    int n;
    cin >> n;

    for(int i=0; i<n; ++i){
        for(int j=0; j<i+1; ++j){
            cout << j+1;
        }
        cout << '\n';
    }
    return 0;
}