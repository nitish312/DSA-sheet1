// // Brute ? O(N) : O(1)
// #include<iostream>
// using namespace std;

// void getFactors(int n){

// 	for(int i=1; i<=n; i++){

// 		if(n % i == 0) cout<<i<<" ";
// 	}
// }

// int main(){

// 	int n = 50;

// 	getFactors(n);

// 	return 0;
// }



// Intuition : when we see the factors of any number, 
// they always lie in pairs. 
// For if ‘n’ is divisible by any number ‘i’ 
// then it will also be divisible by its quotient of n/i
// eg. n=12, i=3 -> (n % i == 0), so 12/3 is also factor  
// 2. optimal ? O(sqrt(N)) : O(1)
#include<bits/stdc++.h>
using namespace std;

void getFactors(int n){

	for(int i=1; i<=sqrt(n); i++){

		if(n % i == 0){

			if(n / i == i){ // if divisors are equal, print only one

				cout<<i<<" ";
			}
			else{ // otherwise print both

				cout<<i<<" "<<n/i<<" ";
			}
		}
	}
}

int main(){

	int n = 50;

	getFactors(n);

	return 0;
}