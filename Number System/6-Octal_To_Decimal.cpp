// loop ? O(log N) : O(1)
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

int main(){

	int octal = 464;

	int deci = octalToDecimal(octal);

	cout<<octal<<" -> "<<deci;

	return 0;
}