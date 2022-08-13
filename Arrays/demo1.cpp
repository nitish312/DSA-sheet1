#include<iostream>
#include<climits>
using namespace std;

void getSecond(int arr[], int n){

	int small = INT_MAX, secondSmall = INT_MAX, large = INT_MIN, secondLarge = INT_MIN;

	for(int i=0; i<n; i++){

		if(arr[i] < small){

			secondSmall = small;
			small = arr[i];
		}
		else if(arr[i] < secondSmall){

			secondSmall = arr[i];
		}

		if(arr[i] > large){

			secondLarge = large;
			large = arr[i];
		}
		else if(arr[i] > secondLarge){

			secondLarge = arr[i];
		}
	}

	

	cout<<"Second Small = "<<secondSmall<<endl;
	cout<<"Second Large = "<<secondLarge<<endl;
}

int main(){

	int arr[] = {1,2,3,4,5,6};
	int n = sizeof(arr)/sizeof(arr[0]);

	getSecond(arr, n);

	return 0;
}