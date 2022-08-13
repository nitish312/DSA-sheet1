// // Strong number -> sum of factorial of each digit 
// // in a number is equal to original number 

// // Brute ? O(N) * O(M) -> O(N*M) : O(1)
// #include<iostream>
// using namespace std;

// int fact(int n){

// 	if(n == 0) return 1;
// 	return n * fact(n-1);
// }

// bool isStrong(int n){

// 	int sum = 0, num = n;
// 	while(num){

// 		int digit = num % 10;
// 		sum += fact(digit);
// 		num /= 10;
// 	}

// 	return (sum == n);
// }

// int main(){

// 	int n = 145;

// 	if(isStrong(n)) cout<<"Yes, "<<n<<" is a strong number";
// 	else cout<<"No, "<<n<<" is not a strong number";

// 	return 0;
// }


// Optimul Solution
// precomputation ? O(10) + O(N) -> O(N) : O(1)
#include<iostream>
using namespace std;

int fact[10];

void preCompute(){

	fact[0] = fact[1] = 1;

	for(int i=2; i<10; i++){

		fact[i] = i * fact[i-1];
	}
}

bool isStrong(int n){

	preCompute();

	int sum = 0, num = n;
	while(num){

		int digit = num % 10;
		sum += fact[digit];
		num /= 10;
	}

	return (sum == n);
}

int main(){

	int n = 145;

	if(isStrong(n)) cout<<"Yes, "<<n<<" is a strong number";
	else cout<<"No, "<<n<<" is not a strong number";

	return 0;
}