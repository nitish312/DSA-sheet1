// Harshad no. -> if given no. is divisible by 
// the sum of all digits in given no., then it is
// 1. brute ? O(log(N)) : O(1)
#include<iostream>
using namespace std;

int getDigitsSum(int n){

	int sum = 0, digit;

	while(n){

		digit = n % 10;
		sum += digit;
		n /= 10;
	}

	return sum;
}

bool isHarshad(int n){

	int sum = getDigitsSum(n);

	if(n % sum == 0) return true;

	return false; 
}

int main(){

	int n = 378;

	if(isHarshad(n)) cout<<"Yes, it is";
	else cout<<"No, its not";

	return 0;
}