#include<iostream>
using namespace std;

// 1. Recursive ? O(N) : O(N)
int fact(int n)
{
	if(n < 3) return n;
	return n * fact(n-1);
}



// 2. Iterative ? O(N) : O(1)
int fact(int n)
{
	int f = n;
	for(int i=2; i<n; i++) f *= i;
	return f;
}

int main()
{
	int n = 6;

	for(int i=1; i<=n; i++)
	{
		cout<<fact(i)<<" ";
	}

	return 0;
}