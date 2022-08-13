// a = first term
// r = common ratio
// n = number of terms
// GP series = while(n--) sum += a, a *= r;

// // Iterative ? O(N) : O(1)
// #include<bits/stdc++.h>
// using namespace std;

// float sumOfGP(float a, float r, int n){

// 	float sum = 0;

// 	// for(int i=0; i<n; i++){

// 	// 	sum += a;
// 	// 	a *= r;
// 	// }
// 	while(n--){

// 		sum += a;
// 		a *= r;
// 	} 

// 	return sum;
// }

// int main(){

// 	float a = 3;
// 	float r = 5;
// 	int n = 2;

// 	cout<<"Sum of GP series = "<<sumOfGP(a, r, n);

// 	return 0;
// }



// Formula ? O(1) : O(1)
#include<bits/stdc++.h>
using namespace std;

float sumOfGP(float a, float r, int n){

	float sum = a * (pow(r, n) - 1) / (r - 1);

	return sum;
}

int main(){

	float a = 3;
	float r = 5;
	int n = 2;

	cout<<"Sum of GP series = "<<sumOfGP(a, r, n);

	return 0;
}