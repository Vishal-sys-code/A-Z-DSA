#include <bits/stdc++.h>
using namespace std;

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selectionSort(int arr[], int n){
    int i, j, min_index;
    for(i = 0; i < n-1 ; i++){
        min_index = i;
        for(j = i+1; j<n; j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
            if(min_index != i){
                swap(&arr[min_index], &arr[i]);
            }
        }
    }
}

int main(){
    int n; 
    cin>>n;
    int arr[n];

    // inputing the array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selectionSort(arr,n);
    // Printing the array
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;    
}