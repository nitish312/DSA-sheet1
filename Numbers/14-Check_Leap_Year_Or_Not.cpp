// Leap year -
// Exactly divisible by 4 except the centuary year
// and if centuary year is divisible by 400, its leap year
// eg. 2000 - leap, 2100 - not, 2200 - not, 2400 - leap


	//1. if n is divisible by 4, check next step, otherwise its not leap year
	//2. if n is divisible by 100, check next step, otherwise its leap year
	//3. if n is divisible by 400, its leap, otherwise its not leap year


// 1. logic ? O(1) : O(1)
#include<bits/stdc++.h>
using namespace std;

bool checkLeap(int n)
{
	if(n % 4 == 0)
	{
		if(n % 100 == 0)
		{
			if(n % 400 == 0) return true;
			else return false;
		}
		else return true;
	}
	else return false;

	// return (n % 4 == 0 && n % 100 != 0 || n % 400 == 0);
}

int main(){

	int year = 2400;

	if(checkLeap(year)) cout<<"Yes, its a Leap Year";
	else cout<<"No, its not a Leap year";

	return 0;
}