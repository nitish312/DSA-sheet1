// Abundant no. -> if sum of divisors of number is 
// is greater than given number
// 1. brute ? O(N) : O(1)
#include<iostream>
using namespace std;

int getDivisorsSum(int n){

	int sum = 0;

	for(int i=1; i<n; i++)
		if(n % i == 0)
			sum += i;

	return sum;
}

bool isAbundant(int n){

	return (getDivisorsSum(n) > n);	
}

int main(){

	int n = 18;

	if(isAbundant(n)) cout<<"Yes, it is";
	else cout<<"No, its not";

	return 0;
}



// 2. optimized ? O(sqrt(N)) : O(1)
#include<iostream>
using namespace std;

int getDivisorsSum(int n){

	int sum = 0;

	for(int i=1; i*i<n; i++){

		if(n % i == 0){

			sum += i;
			if(n / i != i) sum += n / i;
		}
	}

	return sum;
}

bool isAbundant(int n){

	return (getDivisorsSum(n) > n);	
}

int main(){

	int n = 18;

	if(isAbundant(n)) cout<<"Yes, it is";
	else cout<<"No, its not";

	return 0;
}