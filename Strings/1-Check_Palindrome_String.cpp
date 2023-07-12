#include<iostream>
#include<stack>
using namespace std;

// 1. Stack ? O(N) + O(N) -> O(2N) : O(N)
bool isPalindrome(string str)
{
	stack<char> stk;

	for(auto ch: str) stk.push(ch);

	int i = 0;
	while(!stk.empty())
	{
		char ch = stk.top();
		stk.pop();

		if(ch != str[i++]) return false;
	}

	return true;
}



// 2. built-in function ? O(N) : O(1)
bool isPalindrome(string str)
{
	string s2 = str;

	reverse(s2.begin(), s2.end());

	return (s2 == str);
}



// 3. Two pointer ? O(N/2) : O(1)
bool isPalindrome(string str)
{
	int start = 0, end = str.size() - 1;
	while(start < end)
		if(str[start++] != str[end--]) 
			return false;

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