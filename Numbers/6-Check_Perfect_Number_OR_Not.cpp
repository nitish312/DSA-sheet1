// iterative ? O(N) : O(1)
#include<bits/stdc++.h>
using namespace std;
// if number is equal to sum of its proper divisors
// eg. 6 = 1 + 2 + 3
// perfect no. are 6, 28, 496
bool isPerfectNumber(int n){

	int sum = 1; // include 1 -> 1 is also a divisor
	for(int i=2; i<n; i++){

		if(n % i == 0)
			sum += i;
	}

	return (sum == n);
}

int main(){

	int n = 28;

	if(isPerfectNumber(n)) cout<<"Yes, it is";
	else cout<<"No, its not";

	return 0;
}