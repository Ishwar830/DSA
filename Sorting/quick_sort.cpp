#include <iostream>
using namespace std;


int get_pivot_idx(int arr[], int l, int r){
    // arr[r] is pivot element
    int i = l-1;

    for(int j=l; j<r; ++j){
        if(arr[j] <= arr[r]){
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[++i], arr[r]);
    return i;
}

void quick_sort(int arr[], int l, int r){
    if(l>=r) return;

    int pivot_idx = get_pivot_idx(arr, l, r);
    quick_sort(arr, l, pivot_idx-1);
    quick_sort(arr, pivot_idx+1, r);
}

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; ++i) cin >> arr[i];
    
    quick_sort(arr, 0, n-1);
    for(int i=0; i<n; ++i) cout << arr[i] << " ";
    return 0;
}