// // comparative opr. ? O(1) : O(1)
// #include<bits/stdc++.h>
// using namespace std;

// int main(){

// 	int n = -24;

// 	if(n > 0) cout<<"Positive";
// 	else if(n < 0) cout<<"Negative";
// 	else cout<<"Zero";

// 	return 0;
// }


// Bitwise opr. ? O(1) : O(1)
#include<bits/stdc++.h>
using namespace std;

int main(){

	int n = 30;

	if(n == 0) cout<<"Zero";
	else if(n >> 31 == 0) cout<<"Positive";
	else if(n >> 31 == -1) cout<<"Negative";

	return 0;
}