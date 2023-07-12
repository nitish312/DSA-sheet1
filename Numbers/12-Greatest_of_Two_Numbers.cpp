#include<iostream>
using namespace std;

// 1. if-else ? O(1) : O(1)
double greatest(double a, double b)
{
	double greater = (a > b) ? a : b;
	return greater;
}

// 2. built-in max func ? O(1) : O(1)
double greatest(double a, double b)
{
	return max(a, b);
}

int main(){

	double num1 = 1.123;
	double num2 = 1.124;

	cout<<"Greater num = "<<greatest(num1, num2);

	return 0;
}