// 1. brute ? O(log(N)) : O(1)
#include<iostream>
using namespace std;

int getSumOfDigits(int n){

	int sum = 0, digit;

	while(n){

		digit = n % 10;
		sum += digit;
		n /= 10;
	}

	return sum;
}

int main(){

	int n = 12345;

	cout<<getSumOfDigits(n);

	return 0;
}