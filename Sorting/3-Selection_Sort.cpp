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

void selectionSort(int nums[], int n){

	for(int i=0; i<n-1; i++){

		int minIndex = i;
		for(int j=i+1; j<n; j++){

			if(nums[j] < nums[minIndex]){

				minIndex = j;
			}
		}

		swapThem(nums, i, minIndex);
	}
}

int main(){

	int nums[] = {9,8,7,6,5,4,3,2,1};
	int n = sizeof(nums)/sizeof(nums[0]);

	printArr(nums, n);

	selectionSort(nums, n);

	printArr(nums, n);

	return 0;
}