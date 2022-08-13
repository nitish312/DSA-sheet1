// // iterative ? O(N) : O(1)
// #include<bits/stdc++.h>
// using namespace std;

// int main(){

// 	int n = 10, sum = 1;

// 	for(int i=2; i<=n; i++) 
// 		sum += i;

// 	cout<<sum;

// 	return 0;
// }


// by formula ? O(1) : O(1)
#include<bits/stdc++.h>
using namespace std;

int main(){

	int n = 10;

	int sum = n * (n+1) / 2; 

	cout<<sum;

	return 0;
}