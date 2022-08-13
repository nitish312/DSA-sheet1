// // Brute ? O(N) : O(1) 
// #include<iostream>
// using namespace std;

// int main(){

// 	int n = 48;

// 	for(int i=2; i<=n; i++){

// 		while(n % i == 0){

// 			cout<<i<<" ";
// 			n /= i;
// 		}
// 	}

// 	return 0;
// }


// sqrt appr ? O(sqrt(N)) : O(1)
#include<iostream>
using namespace std;

int main(){

	int n = 48;

	for(int i=2; i*i<=n; i++){

		while(n % i == 0){

			cout<<i<<" ";
			n /= i;
		}
		if(n > 1) cout<<n;
	}

	return 0;
}