#include <iostream>
using namespace std;

// Reverse an array using Recursion

void reverse_array(int arr[], int size, int ptr){
    if(ptr >= size/2) return;
    swap(arr[ptr], arr[size-1-ptr]);
    reverse_array(arr, size, ptr + 1);
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; ++i){
        cin >> arr[i];
    }
    
    reverse_array(arr, n, 0);
    for(int i=0; i<n; ++i) cout << arr[i] << " ";
    return 0;
}