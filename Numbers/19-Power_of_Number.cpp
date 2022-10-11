#include<iostream>
using namespace std;

// 1. loop ? O(k) : O(1)
int findPower(int n, int k)
{
	int power = 1;
	while(k--) power *= n;
	return power;
}



// 2. built-in func ? O(log N) : O(1)
int findPower(int n, int k)
{
	return pow(n, k);
} // #include<cmath>



// Intuition: While calculating (n^k), binary exponentiation relies on whether n is even or odd.
// If k is even (nk) can be written as  (n2)k/2. As we can see that computation steps were reduced from k to k/2 in just one step.
// If k is odd (nk) can be written as n.(n)k-1, so now  (k-1) is even. 

// 3. Binary exponentiation ? O(log N) ? O(1)
int findPower(int n, int k)
{
	int power = 1;
	while(k)
	{
		if(k % 2 == 0) // if k is even, k -> (n^2)^k/2
		{ 
			n *= n;
			k /= 2;
		}
		else // if k is odd, make it even, k -> n*(n)^k-1 
		{ 
			power *= n;
			k--;
		}
	}
	
	return power;
}

int main()
{
	int n = 3, k = 4;

	int power = findPower(n, k);
	cout<<n<<" to the power "<<k<<" = "<<power;

	return 0;
}