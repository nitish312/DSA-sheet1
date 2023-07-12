#include<iostream>
using namespace std;

// 1. modulus ? O(1) : O(1)
// even when MOD with two is zero
bool evenOrOdd(int n)
{
    return (n % 2 == 0);
}


// 2. AND ? O(1) : O(1)
// odd when AND with one
bool evenOrOdd(int n)
{
    return !(n & 1);
}

int main(){

	int n = 341;

	if(evenOrOdd(n)) cout<<"Even";
	else cout<<"Odd";

	return 0;
}