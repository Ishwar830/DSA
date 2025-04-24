#include <iostream>
using namespace std;


void merge(int arr[], int l, int r){
    int mid = (l+r)/2;
    int merged_arr[r-l];
    int i = l, j = mid+1, k=0;

    while(i<=mid && j<=r){
        if(arr[i] <= arr[j]){
            merged_arr[k] = arr[i];
            i++;
        }
        else{
            merged_arr[k] = arr[j];
            j++;
        }
        k++;
    }

    for(; i<=mid; ++i){
        merged_arr[k++] = arr[i];
    }

    for(; j<=r; ++j){
        merged_arr[k++] = arr[j];
    }

    for(int i=l; i<=r; ++i){
        arr[i] = merged_arr[i-l];
    }
}

void merge_sort(int arr[], int l, int r){
    if(l == r) return;

    int mid = (l+r)/2;
    merge_sort(arr, l, mid);
    merge_sort(arr, mid+1, r);

    merge(arr, l, r);
}

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; ++i) cin >> arr[i];
    
    merge_sort(arr, 0, n-1);
    for(int i=0; i<n; ++i) cout << arr[i] << " ";
    return 0;
}