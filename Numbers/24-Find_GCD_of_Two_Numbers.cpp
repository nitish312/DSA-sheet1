// GCD = Greatest Common Divisor
// 1. brute ? O(min(n1, n2)) : O(1)
#include<iostream>
using namespace std;

int getGCD(int n1, int n2){

	for(int i=min(n1, n2); i>=1; i--)
		if(n1 % i == 0 && n2 % i == 0) 
			return i;
	
	return 0;
}


// Recursive 
int getGCD(int l, int b)
{
    if(l == 0) return b;
    if(b == 0) return l;
    if(l == b) return l;
    
    return (l > b) ? getGCD(l-b, b) : getGCD(l, b-l);
}

int main(){

	int n1 = 4, n2 = 8;

	int gcd = getGCD(n1, n2);

	cout<<"GCD of "<<n1<<" & "<<n2<<" is "<<gcd<<endl;

	return 0;
}