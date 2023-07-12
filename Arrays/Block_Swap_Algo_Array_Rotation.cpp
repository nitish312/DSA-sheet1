// ***Block Swap Algorithm
// - The block swap algorithm is used to perform array rotations (k times) perfectly.
// - Bydefault = (anti-clockwise rotations)
// 1. iterative approach - ? O(k) * O(N) = O(N^2) : O(1)
// 2. Block Swap Algo approach ? O(N) : O(1)

// Iterative approach
#include<iostream>
using namespace std;

void printArray(int arr[], int n){

	for(int i=0; i<n; i++){

		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void swapSubArray(int arr[], int start, int end, int k){

	for(int i=0; i<k; i++){

		int temp = arr[start + i];
		arr[start + i] = arr[end + i];
		arr[end + i] = temp;
	}
}

void blockSwapAlgo(int arr[], int n, int k){

	if(k == 0 || k == n) return;

	int i = k;
	int j = n - k;
	while(i != j){

		if(i < j){

			swapSubArray(arr, k-i, k-i+j, i);
			j -= i;
		}
		else{

			swapSubArray(arr, k-i, k, j);
			i -= j;
		}
	}

	swapSubArray(arr, k-i, k, i);
}

int main(){

	int arr[] = {4, 6, 1, 8, 9, 2, 3, 1};

	int n = sizeof(arr) / sizeof(arr[0]);

	printArray(arr, n);

	int k = 1;
	blockSwapAlgo(arr, n, k);

	printArray(arr, n);

	return 0;
}