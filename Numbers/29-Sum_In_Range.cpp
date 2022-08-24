// 1. brute ? O(N) -> total no. in range : O(1)
#include<iostream>
using namespace std;

int getSumInRange(int start, int end){

	int sum = 0;

	for(int i=start; i<=end; i++) sum += i;

	return sum;
}

int main(){

	int start = 5, end = 9;

	cout<<getSumInRange(start, end);

	return 0;
}