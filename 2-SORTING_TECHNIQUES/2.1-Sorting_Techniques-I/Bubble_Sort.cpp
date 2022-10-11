#include <bits/stdc++.h>
using namespace std;


int main(){
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int s,e; 
	// s = start
	// e = end
	int temp;
	for(s = 0; s<n-1; s++){ 
		for(e = 0; e<(n-1)-s; e++){ 
			if(arr[e] > arr[e+1]){
				//swapping
				temp = arr[e];
				arr[e] = arr[e+1];
				arr[e+1] = temp;
			}
		}
	}
	
	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
	return 0;
}