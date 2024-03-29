// LCM = Least Common Multiple
// 1. brute ? O(min(n1, n2)) : O(1)
#include<iostream>
using namespace std;

int getGCD(int n1, int n2){

	for(int i=min(n1, n2); i>=1; i--)
		if(n1 % i == 0 && n2 % i == 0) 
			return i;
	
	return 0;
}

int main(){

	int n1 = 4, n2 = 8;

	int lcm = (n1 * n2) / getGCD(n1, n2);

	cout<<"LCM of "<<n1<<" & "<<n2<<" is "<<lcm<<endl;

	return 0;
}