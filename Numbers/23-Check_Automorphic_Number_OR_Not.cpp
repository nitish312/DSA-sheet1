// Automorphic number -> 
// when a number itself is present at last position
// of its squared number

// Brute ? O(N) : O(1)
// where N is total no. of digits
#include<iostream>
using namespace std;

bool isAutomorphic(int n){

	int num = n, sqr = n * n;

	while(num){

		if(num % 10 != sqr % 10) return false;

		num /= 10;
		sqr /= 10;
	}

	return true;
}

int main(){

	int n = 25;

	if(isAutomorphic(n)) cout<<"Yes, "<<n<<" is an Automorphic number";
	else cout<<"No, "<<n<<" is Not an Automorphic number";

	return 0;
}