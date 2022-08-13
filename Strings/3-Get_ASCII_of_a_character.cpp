// 1. by typecasting ? O(1) : O(1)
#include<iostream>
using namespace std;

int main(){

	char ch = 'a';

	cout<<"Char to ASCII value = "<<ch<<" = "<<(int) ch;

	int value = 65;

	cout<<endl<<"ASCII value to Char = "<<(char) value;

	return 0;
}