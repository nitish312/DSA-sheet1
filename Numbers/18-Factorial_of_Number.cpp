// // Iterative ? O(N) : O(1)
// #include<iostream>
// using namespace std;

// int fact(int n){

// 	int fact = 1;

// 	for(int i=2; i<=n; i++) fact *= i;

// 	return fact;
// }

// int main(){

// 	int n = 5;

// 	cout<<fact(n);

// 	return 0;
// }


// recursive ? O(N) : O(1)
#include<iostream>
using namespace std;

int fact(int n){

	if(n == 0) return 1;

	return n * fact(n-1);
}

int main(){

	int n = 5;

	cout<<fact(n);

	return 0;
}