#include<iostream>
using namespace std;

// 1. loop ? O(N) : O(1)
int sumOfFirstN(int n)
{
	int sum = 1;
	for(int i=2; i<=n; i++) sum += i;
	return sum;
}



// 2. formula ? O(1) : O(1)
int sumOfFirstN(int n)
{
	return (n * (n + 1) / 2);
}

int main(){

	int n = 10;

	cout<<sumOfFirstN(n);

	return 0;
}