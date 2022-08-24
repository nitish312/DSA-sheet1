// 1. brute ? O(log(N)) : O(1)
#include<iostream>
using namespace std;

int replaceZerosWithOnes(int n){

	if(n == 0) return 1;

	int ans = 0, temp = 1;
	while(n){

		int digit = n % 10;

		if(digit == 0) digit++;

		ans += digit * temp;
		temp *= 10;
		n /= 10;
	}

	return ans;
}

int main(){

	int n = 102003;

	cout<<n<<endl<<replaceZerosWithOnes(n);

	return 0;
}