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

void bubbleSort(int nums[], int n){

	for(int i=0; i<n-1; i++){
		
		for(int j=0; j<n-1-i; j++){
			
			if(nums[j] > nums[j+1]){
				
				swapThem(nums, j, j+1);
			}
		}
	}
}

int main(){

	int nums[] = {9,8,7,6,5,4,3,2,1};
	int n = sizeof(nums)/sizeof(nums[0]);

	printArr(nums, n);

	bubbleSort(nums, n);

	printArr(nums, n);

	return 0;
}