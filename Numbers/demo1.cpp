
#include<iostream>
#include<stack>
using namespace std;

void decimalToBinary(int n){

	stack<int> stk;

	while(n){

		int rem = n % 2;
		stk.push(rem);
		n /= 2;
	}

	while(!stk.empty()){

		cout<<stk.top();
		stk.pop();
	}
}

int main(){

	int n = 152;

	cout<<n<<" -> ";

	decimalToBinary(n);

	return 0;
}