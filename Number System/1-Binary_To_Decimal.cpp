// // inbuilt func ? O(N) : O(1)
// #include<iostream>
// using namespace std;

// int binaryToDecimal(string s){

// 	return stoi(s, 0, 2);
// }

// int main(){

// 	string s = "111";

// 	int bin = binaryToDecimal(s);

// 	cout<<s<<" -> "<<bin;

// 	return 0;
// }


// loop ? O(log N) : O(1)
#include<iostream>
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

int main(){

	int n = 1111;

	int bin = binaryToDecimal(n);

	cout<<n<<" -> "<<bin;

	return 0;
}