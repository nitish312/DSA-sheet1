#include<iostream>
using namespace std;

// 1. nested loop ? O(N) : O(1) 
void allPrimeFactors(int n)
{
	for(int i=2; i<=n; i++)
	{
		while(n % i == 0)
		{
			cout<<i<<" ";
			n /= i;
		}
	}
}



// 2. till sqrt ? O(sqrt(N)) : O(1)
void allPrimeFactors(int n)
{
	for(int i=2; i*i<=n; i++)
	{
		while(n % i == 0)
		{
			cout<<i<<" ";
			n /= i;
		}
		if(n > 1) cout<<n;
	}
}

int main()
{
	int n = 48;
	allPrimeFactors(n);

	return 0;
}