#include<iostream>
using namespace std;

void printArr(int nums[], int n){

	for(int i=0; i<n; i++)
		cout<<nums[i]<<" ";
	cout<<endl;
}

void swapThem(int nums[], int a, int b){

	int temp = nums[a];
	nums[a] = nums[b];
	nums[b] = temp;
}

int partition(int nums[], int start, int end){

	int pivotEle = nums[start], count = 0;
	for(int i=start+1; i<=end; i++){

		if(nums[i] < pivotEle){

			count++;
		}
	}

	int pivotIndex = start + count;

	swapThem(nums, start, pivotIndex);

	int i = start, j = end;
	while(i < pivotIndex && j > pivotIndex){

		while(nums[i] < pivotEle) i++;
		while(nums[j] > pivotEle) j--;

		if(i < pivotIndex && j > pivotIndex){

			swapThem(nums, i++, j--);
		}
	}

	return pivotIndex;
}

void quickSort(int nums[], int start, int end){

	if(start >= end) return;

	int p = partition(nums, start, end);

	quickSort(nums, start, p-1);
	quickSort(nums, p+1, end);
}

int main(){

	int nums[] = {9,8,7,6,5,4,3,2,1};
	int n = sizeof(nums)/sizeof(nums[0]);

	printArr(nums, n);

	quickSort(nums, 0, n-1);

	printArr(nums, n);

	return 0;
}