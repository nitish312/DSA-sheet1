// octal -> decimal -> binary
// ? O(log N) + O(32) -> O(32) : O(1)
#include<iostream>
#include<math.h>
using namespace std;

int octalToDecimal(int n){

	int deci = 0;
  	int i = 0;
  	while (n != 0){

	    int rem = n % 10;
	    deci += rem * pow(8, i);
	    n /= 10;

	    i++;
  	}
  	
  	return deci;
}

void decimalToBinary(int n){

	int flag = 0;

	for(int i=31; i>=0; i--){

		if((n >> i) & 1){

			flag = 1;
			cout<<1;
		}
		else if(flag) cout<<0;
	}
}

void octalToBinary(int n){

	int deci = octalToDecimal(n);

	decimalToBinary(deci);
}

int main(){

	int n = 542;

	cout<<n<<" -> ";

	octalToBinary(n);

	return 0;
}