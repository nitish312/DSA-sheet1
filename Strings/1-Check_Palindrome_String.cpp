// // 1. using stack ? O(N) + O(N) = O(N) : O(N)
// #include<iostream>
// #include<stack>
// using namespace std;

// bool isPalindrome(string str){

// 	stack<char> stk;

// 	int n = str.size();

// 	for(int i=0; i<n; i++){

// 		stk.push(str[i]);
// 	}

// 	int i = 0;
// 	while(!stk.empty()){

// 		char ch = stk.top();
// 		stk.pop();

// 		if(ch != str[i++]) return false;
// 	}

// 	return true;
// }

// int main(){

// 	string str = "non";

// 	if(isPalindrome(str)) 
// 		cout<<"Yes, "<<str<<" is a palindrome string";
// 	else 
// 		cout<<"No, "<<str<<" is not a palindrome string";

// 	return 0;
// }


// // 2. built-in function ? O(N) : O(1)
// #include<iostream>
// #include<algorithm>
// using namespace std;

// bool isPalindrome(string str){

// 	string s2 = str;

// 	reverse(s2.begin(), s2.end());

// 	return (s2 == str);
// }

// int main(){

// 	string str = "nitish";

// 	if(isPalindrome(str)) 
// 		cout<<"Yes, "<<str<<" is a palindrome string";
// 	else 
// 		cout<<"No, "<<str<<" is not a palindrome string";

// 	return 0;
// }


// 3. Two pointer ? O(N/2) : O(1)
#include<iostream>
#include<stack>
using namespace std;

bool isPalindrome(string str){

	int start = 0, end = str.size() - 1;
	while(start < end){

		if(str[start++] != str[end--]) return false;
	}

	return true;
}

int main(){

	string str = "racecar";

	if(isPalindrome(str)) 
		cout<<"Yes, "<<str<<" is a palindrome string";
	else 
		cout<<"No, "<<str<<" is not a palindrome string";

	return 0;
}