#include <iostream>
using namespace std;


void bubble_sort(int n, int arr[]){
    for(int i=0; i<n-1; ++i){
        bool swapped = false;
        for(int j=0; j<n-1-i; ++j){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped) return;
    }
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; ++i) cin >> arr[i];
    
    bubble_sort(n, arr);
    for(int i=0; i<n; ++i) cout << arr[i] << " ";

    return 0;
}