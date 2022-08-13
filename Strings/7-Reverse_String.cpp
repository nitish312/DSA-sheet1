// // 1. using stack ? O(N) + O(N) = O(N) : O(N)
// #include<iostream>
// #include<stack>
// using namespace std;

// string reverseString(string str){

// 	stack<int> stk;

// 	int n = str.size();

// 	for(int i=0; i<n; i++){

// 		stk.push(str[i]);
// 	}

// 	int i = 0;
// 	while(!stk.empty()){

// 		str[i++] = stk.top();
// 		stk.pop();
// 	}

// 	return str;
// }

// int main(){

// 	string str = "dog";

// 	string rev = reverseString(str);

// 	cout<<"Original -> "<<str<<endl;
// 	cout<<"Reversed -> "<<rev<<endl;

// 	return 0;
// }


// // 2. built-in ? O(N) : O(1)
// #include<iostream>
// #include<algorithm>
// using namespace std;

// int main(){

// 	string str = "dog";

// 	string rev = str;

// 	reverse(rev.begin(), rev.end());

// 	cout<<"Original -> "<<str<<endl;
// 	cout<<"Reversed -> "<<rev<<endl;

// 	return 0;
// }


// 3. Two-Pointer ? O(N/2) : O(1)
#include<iostream>
using namespace std;

void swapThem(string &str, char a, char b){ // string pass by reference

	char temp = str[a];
	str[a] = str[b];
	str[b] = temp;
}

string reverseString(string str){

	int start = 0, end = str.size() - 1;
	while(start < end){

		swapThem(str, start++, end--);
	}

	return str;
}

int main(){

	string str = "dog";

	string rev = reverseString(str);

	cout<<"Original -> "<<str<<endl;
	cout<<"Reversed -> "<<rev<<endl;

	return 0;
}