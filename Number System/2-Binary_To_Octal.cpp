// Binary -> Decimal -> Octal
// error ? O(log N) + O(log N) -> O(log N) : O(1)
#include<iostream>
#include<math.h>
using namespace std;

int binaryToDecimal(int n){

	int deci = 0;

	int base = 1;
	while(n){

		if(n % 10) deci += base;

		base *= 2;

		n /= 10;
	}

	return deci;
}

int decimalToOctal(int n){

	int octal = 0;

	int i = 0;
	while(n){

		int rem = n % 8;

		octal += rem * pow(10, i);

		n /= 8;

		i++;
	}

	return octal;
}

int binaryToOctal(int n){

	int deci = binaryToDecimal(n);

	int octal = decimalToOctal(deci);

	return octal;
}

int main(){

	int n = 1;

	int octal = binaryToOctal(n);

	cout<<n<<" -> "<<octal;

	return 0;
}