/*
Problem statement: Given an array, we have found the number of occurrences of each element in the array.

Examples:

Example 1:
Input: arr[] = {10,5,10,15,10,5};

Output:
Maximum Frequency: 3 of the element: 10
Minimum Frequency: 1 of the element: 15


Example2: 
Input: arr[] = {2,2,3,4,4,2};

Output:
Maximum Frequency: 3 of the element: 2
Minimum Frequency: 1 of the element: 3
*/

#include <bits/stdc++.h>
using namespace std;

void countfreq2(int arr[], int n){
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    int max_count = 0;
    int min_count = n;
    int res1 = -1;
    int res2 = -1;
    for(auto it : mp){
        if(max_count < it.second){
            res1 = it.first;
            max_count = it.second;
        }
        if(min_count > it.second){
            res2 = it.first;
            min_count = it.second;
        }
    }
    cout << "Maximum Frequency: " << max_count << " of the element: " << res1 << endl;
    cout << "Minimum Frequency: " << min_count << " of the element: " << res2 << endl;
}

void countfreq3(int arr[], int n)
{
    // sort(arr, arr + n);
    int maxcount = 0;
    int mincount = n;
    int element_having_max_freq;
    int element_having_min_freq;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }
        if (count > maxcount) {
            maxcount = count;
            element_having_max_freq = arr[i];
        }
        if (count < mincount) {
            mincount = count;
            element_having_min_freq = arr[i];
        }
    }
    cout << "Maximum Frequency: " << maxcount << " of the element: " << element_having_max_freq << endl;
    cout << "Minimum Frequency: " << mincount << " of the element: " << element_having_min_freq << endl;
}

int main(){
    int n; 
    cout << "Enter the elements: "<< endl;
    cin>>n;
    int arr[n];
    cout << "Enter the array elements: " << endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout << "----HIGHEST AND LOWEST FREQUENCY OF THE ELEMENT----" << endl;
    countfreq2(arr,n);
    cout << "----------------------------------------------------" << endl;
    cout << "----HIGHEST AND LOWEST FREQUENCY OF THE ELEMENT----" << endl;
    countfreq3(arr,n);
    return 0;
}