#include <iostream>
using namespace std;

// Print Fibonacci series upto Nth term

void generate_fibo_series(int n, int arr[]){
    if(n <= 1) return;
    generate_fibo_series(n-1, arr);
    arr[n] = arr[n-1] + arr[n-2];
    return;
}

int main(){
    int n;
    cin >> n;  
    int arr[100000];
    arr[0] = 0;
    arr[1] = 1;
    generate_fibo_series(n, arr);

    for(int i=0; i<=n; ++i) cout << arr[i] << " ";

    return 0;
}