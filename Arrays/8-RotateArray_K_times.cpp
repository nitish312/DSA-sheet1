// // iterative ? O(T) * O(N) ->O(N^2) : O(1)
// // T is no. of times arr to rotate, N is no. of elem in arr.
// #include<bits/stdc++.h>
// using namespace std;

// void printVec(vector<int> vec, int n){

//     for(int i=0; i<n; i++) cout<<vec[i]<<" ";
//     cout<<endl;
// }

// void antiClockwise(vector<int> &vec, int n){

//     int first = vec[0];
//     for(int i=0; i<n-1; ++i){

//         vec[i] = vec[i+1];
//     }
//     vec[n-1] = first;
// }

// void clockwise(vector<int> &vec, int n){

//     int last = vec[n-1];
//     for(int i=n-1; i>0; --i){

//         vec[i] = vec[i-1];
//     }
//     vec[0] = last;
// }


// void rotateThem(vector<int> &vec, int n, bool order, int times){

//     while(times--){

//        if(order) clockwise(vec, n);
//        else antiClockwise(vec, n);
//     }
// }

// int main(){

//     vector<int> vec = {10,20,30,40,50,60,70,80};
//     // int arr[8] = {1,3,0,0,2,0,3,0};
//     // {65,23,7,43,123,657,45,12}

//     int n = vec.size();

//     printVec(vec, n);

//     // true = clockwise
//     // false = anti-clockwise
//     bool order = true;
//     int times = 3;
//     rotateThem(vec, n, order, times);

//     printVec(vec, n);

//     return 0;
// }

/*

For Anti-clockwise - O(N) - Block Swap Algo
For Clockwise - O(N) - 3 reversals (see q.20)

*/


// Block Swap Algo. ? O(N) : O(1)
// default -> (anti-clockwise rotations)
#include<bits/stdc++.h>
using namespace std;

void printVec(int arr[], int n){

    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;
}

void swapSubArray(int arr[], int start, int end, int k){

	int temp;
	for(int i=0; i<k; i++){

		temp = arr[i + start];
		arr[i + start] = arr[i + end];
		arr[i + end] = temp;
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

    int arr[] = {10,20,30,40,50,60,70,80};
    int n = sizeof(arr) / sizeof(arr[0]);

    printVec(arr, n);

    int k = 2;

    blockSwapAlgo(arr, n, k);

    printVec(arr, n);

    return 0;
}