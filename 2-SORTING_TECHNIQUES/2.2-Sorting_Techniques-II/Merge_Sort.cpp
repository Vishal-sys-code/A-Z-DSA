#include <bits/stdc++.h>
using namespace std;


void merge(int arr[], int l, int mid, int r){
    int i,j,k;
    int n1 = mid-l+1;
    int n2 = r-mid;

    // temporary arrays
    int L[n1], R[n2];

    /*Copy data to the temporary arrays*/
    for(i=0;i<n1;i++){
        L[i] = arr[l+i];
    }
    for(j=0;j<n2;j++){
        R[j] = arr[mid+1+j];
    }

    // Merge the temp arrays back into arr[1...r]
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray

    while(i<n1 && j<n2){
        if(L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if there are any
    while(i<n1){
        arr[k] = L[i];
        i++;
        j++;
    }

    // Copy the remaining elements of R[], if there are any
    while(j<n2){
        arr[k] = R[j];
        j++;
        k++;
    }
}


void MergeSort(int arr[], int l, int r){
    if(l<r){
        int mid = l+ (r-l)/2; 
        // int mid = (l+r)/2;
        MergeSort(arr, l, mid);
        MergeSort(arr, mid+1, r);
        merge(arr, l, mid, r);
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
    MergeSort(arr, 0, n-1);
    // Printing the array
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}