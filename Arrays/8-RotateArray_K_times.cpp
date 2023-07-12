#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> vec, int n){

    for(int i=0; i<n; i++) cout<<vec[i]<<" ";
    cout<<endl;
}

// 1. rotate() will shift each elem by 1, then call ratate() k times 
// ? O(N) * O(K) -> O(N*K) : O(1)
void antiClockwise(vector<int> &vec, int n){

    int first = vec[0];
    for(int i=0; i<n-1; ++i){

        vec[i] = vec[i+1];
    }
    vec[n-1] = first;
}

void clockwise(vector<int> &vec, int n){

    int last = vec[n-1];
    for(int i=n-1; i>0; --i){

        vec[i] = vec[i-1];
    }
    vec[0] = last;
}

void rotateThem(vector<int> &vec, int n, bool order, int times){

    while(times--){

       if(order) clockwise(vec, n);
       else antiClockwise(vec, n);
    }
}



// 2. Block Swap Algo. ? O(N) : O(1)
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

    vector<int> vec = {10,20,30,40,50,60,70,80};

    int n = vec.size();

    printVec(vec, n);

    // true = clockwise
    // false = anti-clockwise
    bool order = true;
    int times = 3;
    rotateThem(vec, n, order, times);

    printVec(vec, n);

    return 0;
}
/*
// For Anti-clockwise ? O(N) -> Block Swap Algo
// For Clockwise ? O(N) -> 3 reversals (see sht2 q.20)
*/