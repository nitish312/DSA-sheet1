// // brute ? O(k) ? O(1) 
// #include<iostream>
// using namespace std;

// int findPower(int n, int k){

// 	int power = 1;

// 	while(k--) power *= n;

// 	return power;
// }

// int main(){

// 	int n = 3, k = 4;

// 	int power = findPower(n, k);
// 	cout<<n<<" to the power "<<k<<" = "<<power;

// 	return 0;
// }



// // inbuilt function ? O(log N) ? O(1) 
// #include<bits/stdc++.h>
// using namespace std;

// int findPower(int n, int k){

// 	return pow(n, k);
// }

// int main(){

// 	int n = 3, k = 4;

// 	int power = findPower(n, k);
// 	cout<<n<<" to the power "<<k<<" = "<<power;

// 	return 0;
// }


// Binary exponentiation ? O(log N) ? O(1)
// Intuition: While calculating (n^k), binary exponentiation relies on whether n is even or odd.

// If k is even (nk) can be written as  (n2)k/2. As we can see that computation steps were reduced from k to k/2 in just one step.

// If k is odd (nk) can be written as n.(n)k-1, so now  (k-1) is even. 

#include<iostream>
using namespace std;

int findPower(int num, int po){

	int n = num, k = po;
	int ans = 1;
	while(k){

		if(!(k & 1)){ // if k is even, k -> (n^2)^k/2

			n *= n;
			k /= 2;
		}
		else{ // if k is odd, make it even, k -> n*(n)^k-1 

			ans *= n;
			k--;
		}
	}
	
	return ans;
}

int main(){

	int n = 3, k = 4;

	int power = findPower(n, k);
	cout<<n<<" to the power "<<k<<" = "<<power;

	return 0;
}