#include<iostream>
using namespace std;

// 1. loop ? O(N) : O(1)
void getFactors(int n)
{
	for(int i=1; i<=n; i++) 
		if(n % i == 0)
			cout<<i<<" ";
}



// Intuition : when we see the factors of any number, 
// they always lie in pairs. 
// For if ‘n’ is divisible by any number ‘i’ 
// then it will also be divisible by its quotient of n/i
// eg. n=12, i=3 -> (n % i == 0), so 12/3 is also factor  

// 2. till sqrt ? O(sqrt(N)) : O(1)
void factorsOfN(int n)
{
	for(int i=1; i*i<=n; i++) 
	{
		if(n % i == 0)
		{
			if(n / i == i) cout<<i<<" ";
			else cout<<i<<" "<<n/i<<" ";
		}
	}
}

int main(){

	int n = 50;

	getFactors(n);

	return 0;
}