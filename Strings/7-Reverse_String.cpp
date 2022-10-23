#include<iostream>
#include<stack>
using namespace std;

// 1. using stack ? O(N) + O(N) -> O(2N) : O(N)
string reverseString(string str)
{
	stack<int> stk;
	int n = str.size();

	for(int i=0; i<n; i++) stk.push(str[i]);

	int i = 0;
	while(!stk.empty())
	{
		str[i++] = stk.top();
		stk.pop();
	}
	return str;
}



// // 2. built-in reverse() ? O(N) : O(1)
string reverseString(string str)
{
	reverse(str.begin(), str.end());
	return str;
}



// 3. Two-Pointer ? O(N/2) : O(1)
void swapThem(string &str, char a, char b) 
{	// string pass by reference
	char temp = str[a];
	str[a] = str[b];
	str[b] = temp;
}

string reverseString(string str)
{
	int start = 0, end = str.size() - 1;
	while(start < end)
		swapThem(str, start++, end--);

	return str;
}

int main()
{
	string str = "dog";

	string rev = reverseString(str);

	cout<<"Original -> "<<str<<endl;
	cout<<"Reversed -> "<<rev<<endl;

	return 0;
}