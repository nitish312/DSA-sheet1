// loop ? O(log(N)) : O(1)
#include<iostream>
#include<climits>
using namespace std;

void getMiniMaxi(int n){

	int mini = 9;
	int maxi = 0;
	while(n){

		int digit = n % 10;
		mini = min(mini, digit);
		maxi = max(maxi, digit);
		n /= 10;
	}

	cout<<"Minimum Digit = "<<mini<<endl;
	cout<<"Maximum Digit = "<<maxi<<endl;
}

int main(){

	int n = 2725;

	getMiniMaxi(n);

	return 0;
}