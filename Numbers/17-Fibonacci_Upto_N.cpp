// // using space ? O(N) + O(N) = O(N) : O(N) 
// #include<iostream>
// using namespace std;

// void fibo(int n){

// 	int arr[n];
// 	arr[0] = 0;
// 	arr[1] = 1;
// 	for(int i=2; i<n; i++){

// 		arr[i] = arr[i-1] + arr[i-2];
// 	}

// 	for(int i=1; i<=n; i++){

// 		cout<<arr[i-1]<<" ";
// 	}
// }

// int main(){

// 	int n = 10;

// 	fibo(n);

// 	return 0;
// }


// iterative ? O(N) : O(1) 
#include<iostream>
using namespace std;

void fibo(int n){

	int first = 0, second = 1, next;

	if(n == 1) cout<<first;
	else if(n == 2) cout<<second;
	else{

		for(int i=3; i<=n; i++){

			next = first + second;
			cout<<next<<" ";
			first = second;
			second = next;
		}
	}
}

int main(){

	int n = 10;

	fibo(n);

	return 0;
}