// // using stack ds ? O(log N) : O(32)
// #include<iostream>
// #include<stack>
// using namespace std;

// void decimalToBinary(int n){

// 	stack<int> stk;

// 	while(n){

// 		int rem = n % 2;
// 		stk.push(rem);
// 		n /= 2;
// 	}

// 	while(!stk.empty()){

// 		cout<<stk.top();
// 		stk.pop();
// 	}
// }

// int main(){

// 	int n = 152;

// 	cout<<n<<" -> ";

// 	decimalToBinary(n);

// 	return 0;
// }


// // using array ? O(log N) : O(32)
// #include<iostream>
// using namespace std;

// void decimalToBinary(int n){

// 	int arr[32];

// 	int i = 0;
// 	while(n){

// 		arr[i++] = n % 2;
// 		n /= 2;
// 	}

// 	for(int j=i-1; j>=0; j--){

// 		cout<<arr[j];
// 	}
// }

// int main(){

// 	int n = 100;

// 	cout<<n<<" -> ";

// 	decimalToBinary(n);

// 	return 0;
// }


// using bitwise operators ? O(32) : O(1)

#include<iostream>
using namespace std;

void decimalToBinary(int n){

	int flag = 0;

	for(int i=31; i>=0; i--){

		if((n >> i) & 1){

			flag = 1;
			cout<<1;
		}
		else if(flag) cout<<0;
	}
}

int main(){

	int n = 16;

	cout<<n<<" -> ";

	decimalToBinary(n);

	return 0;
}