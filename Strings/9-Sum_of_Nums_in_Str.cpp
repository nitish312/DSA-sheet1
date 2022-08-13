#include<iostream>
using namespace std;

int sumOfDigits(string str){

	int sum = 0, n = str.size();

	string tempString = "";

	for(int i=0; i<n; i++){

		if(str[i] >= '0' && str[i] <= '9'){

			tempString += str[i];
		}
		else{

			sum += atoi(tempString.c_str());
			tempString = "";
		}
	}

	return sum + atoi(tempString.c_str());
}

int main(){

	string str = "123xyz23ab4";

	int numSum = sumOfDigits(str);

	cout<<"Sum = "<<numSum;

	return 0;
}