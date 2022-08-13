// // if-else ? O(1) : O(1)
// #include<bits/stdc++.h>
// using namespace std;

// int greatestOfThree(int num1, int num2, int num3){

// 	if(num1 > num2 && num1 > num3) return num1;
// 	else if(num2 > num3) return num2;
// 	else return num3;
// }

// int main(){

// 	auto num1 = 44;
// 	auto num2 = 62;
// 	auto num3 = 34;

// 	cout<<greatestOfThree(num1, num2, num3);

// 	return 0;
// }



// inbuilt function ? O(1) : O(1)
#include<bits/stdc++.h>
using namespace std;

int greatestOfThree(int num1, int num2, int num3){

	return max(num1, max(num2, num3));
}

int main(){

	auto num1 = 44;
	auto num2 = 62;
	auto num3 = 34;

	cout<<greatestOfThree(num1, num2, num3);

	return 0;
}