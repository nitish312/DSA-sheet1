// iterative ? O(log(N)) : O(1)
// where n is the number of digits in the given integer. 
// Because there are only log(n) digits in a number n.
#include<iostream>
using namespace std;

int reverseIt(int n){

	int rev = 0, digit;
	while(n){

		digit = n % 10;
		rev = rev * 10 + digit;
		n /= 10;
	}

	return rev;
}

int main(){

	int n = 1234;

	int rev = reverseIt(n);
	cout<<n<<" <-> "<<rev;

	return 0;
}


// // Recursive ? O(log(N)) : O(1)
// #include<iostream>
// using namespace std;

// int reverseIt(int n){

// 	static int rev = 0, pos = 1;

// 	if(n){

// 		reverseIt(n / 10);
// 		rev += pos * (n % 10);
// 		pos *= 10;
// 	}

// 	return rev;
// }

// int main(){

// 	int n = 1234;

// 	int rev = reverseIt(n);

// 	cout<<n<<" <-> "<<rev;

// 	return 0;
// }