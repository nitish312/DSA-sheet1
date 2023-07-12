#include<iostream>
using namespace std;

void printArr(int nums[], int n){

	for(int i=0; i<n; i++)
		cout<<nums[i]<<" ";
	cout<<endl;
}

void insertionSort(int nums[], int n){

	for(int i=1; i<n; i++){

		int curr = nums[i];
		int j = i - 1;
		while(curr < nums[j] && j>=0){

			nums[j+1] = nums[j];
			j--;
		}

		nums[j+1] = curr;
	}
}

int main(){

	int nums[] = {9,8,7,6,5,4,3,2,1};
	int n = sizeof(nums)/sizeof(nums[0]);

	printArr(nums, n);

	insertionSort(nums, n);

	printArr(nums, n);

	return 0;
}