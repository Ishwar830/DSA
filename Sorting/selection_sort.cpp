#include <iostream>
using namespace std;


void selection_sort(int n, int arr[]){
    for(int i=0; i<n-1; ++i){
        int idx = i;
        for(int j=i; j<n; ++j){
            if(arr[j] < arr[idx]){
                idx = j;
            }
        }
        swap(arr[i], arr[idx]);
    }
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; ++i) cin >> arr[i];
    
    selection_sort(n, arr);
    for(int i=0; i<n; ++i) cout << arr[i] << " ";

    return 0;
}