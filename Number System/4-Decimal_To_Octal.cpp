// // using array ? O(log N) : O(8)
// #include<iostream>
// #include<math.h>
// using namespace std;

// void decimalToOctal(int n){

// 	int arr[8];

// 	int i = 0;
// 	while(n){

// 		arr[i++] = n % 8;
// 		n /= 8;
// 	}

// 	for(int j=i-1; j>=0; j--){

// 		cout<<arr[j];
// 	}
// }

// int main(){

// 	int n = 100000;

// 	cout<<n<<" -> ";

// 	decimalToOctal(n);

// 	return 0;
// }


// loop n pow func ? O(log N) : O(1)
#include<iostream>
#include<math.h>
using namespace std;

int decimalToOctal(int n){

	int octal = 1;

	int i = 0;
	while(n){

		int rem = n % 8;

		octal += rem * pow(10, i);

		n /= 8;

		i++;
	}

	return octal;
}

int main(){

	int n = 745;

	int octal = decimalToOctal(n);

	cout<<n<<" -> "<<octal;

	return 0;
}