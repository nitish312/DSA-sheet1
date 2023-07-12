// Strong number -> sum of factorial of each digit 
// in a number is equal to original number 

#include<iostream>
using namespace std;

// 1. Brute ? O(N) * O(logN) -> O(N*logN) : O(1)
int fact(int n)
{
	int f = 1;
	for(int i=2; i<=n; i++) f *= i;
	return f;
}

bool isStrong(int n)
{
	int sum = 0, num = n;
	while(num)
	{
		int lastDigit = num % 10;
		sum += fact(lastDigit);
		num /= 10;
	}

	return (sum == n);
}



// 2. precomputation ? O(10) + O(logN) -> O(logN) : O(1)
int fact[10];

void preCompute()
{
	fact[0] = fact[1] = 1;

	for(int i=2; i<10; i++)
	{
		fact[i] = i * fact[i-1];
	}
}

bool isStrong(int n){

	preCompute();

	int sum = 0, num = n;
	while(num)
	{
		int lastDigit = num % 10;
		sum += fact[lastDigit];
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