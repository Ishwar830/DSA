#include <iostream>
using namespace std;

void insertion_sort(int n, int arr[]){
    for(int i=n-2; i>=0; --i){
        for(int j=i; j<n-1; ++j){
            if(arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);
            else break;
        }
    }
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; ++i) cin >> arr[i];
    
    insertion_sort(n, arr);
    for(int i=0; i<n; ++i) cout << arr[i] << " ";

    return 0;
}