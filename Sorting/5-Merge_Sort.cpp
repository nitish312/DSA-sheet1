#include<iostream>
using namespace std;

void printArr(int nums[], int n){

	for(int i=0; i<n; i++)
		cout<<nums[i]<<" ";
	cout<<endl;
}

void merge(int nums[], int start, int mid, int end){

	int len1 = mid + 1 - start, len2 = end - mid;
	int leftPart[len1], rightPart[len2];

	for(int i=0; i<len1; i++) 
		leftPart[i] = nums[i + start];
	for(int j=0; j<len2; j++) 
		rightPart[j] = nums[j + mid + 1];

	int i = 0, j = 0;
	while(i < len1 && j < len2){

		nums[start++] = (leftPart[i] < rightPart[j]) ? leftPart[i++] : rightPart[j++];
	}

	while(i < len1) nums[start++] = leftPart[i++];
	while(j < len2) nums[start++] = rightPart[j++];
}

void mergeSort(int nums[], int start, int end){

	if(start >= end) return;

	int mid = start + (end - start)/2;

	mergeSort(nums, start, mid);
	mergeSort(nums, mid+1, end);

	merge(nums, start, mid, end);
}

int main(){

	int nums[] = {9,8,7,6,5,4,3,2,1};
	int n = sizeof(nums)/sizeof(nums[0]);

	printArr(nums, n);

	mergeSort(nums, 0, n-1);

	printArr(nums, n);

	return 0;
}