#include<iostream>
using namespace std;

// 1. iterative ? O(log(K)) : O(1)
// where K is the number of digits in the given integer. 
// Because there are only log(n) digits in a number n.
int reverseIt(int n)
{
	int rev = 0, lastDigit;
	while(n)
	{
		lastDigit = n % 10;
		rev = rev * 10 + digit;
		n /= 10;
	}
	return rev;
}



// 2. Recursive ? O(log(K)) : O(1)
int reverseIt(int n)
{
	static int rev = 0, pos = 1;
	if(n)
	{
		reverseIt(n / 10);
		rev += pos * (n % 10);
		pos *= 10;
	}
	return rev;
}

int main(){

	int n = 1234;

	int rev = reverseIt(n);
	cout<<n<<" <-> "<<rev;

	return 0;
}