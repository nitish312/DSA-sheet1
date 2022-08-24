#include<iostream>
using namespace std;

double areaOfCircle(int r){

	return 3.14 * r * r;
}

int main(){

	int radius = 4;

	cout<<"Area of square = "<<areaOfCircle(radius);

	return 0;
}