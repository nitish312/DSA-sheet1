#include<iostream>
using namespace std;

// 1. if-continue ? O(N) : O(N)
string removeBrackets(string str)
{
	int n = str.size();
	string ans;

	for(int i=0; i<n; i++)
	{
		if(str[i] == '(' || str[i] == ')' || 
		   str[i] == '[' || str[i] == ']' || 
		   str[i] == '{' || str[i] == '}')
		{
			continue;
		}
		ans.push_back(str[i]);
	}
	return ans;
}



// 2. inplace - replace(brackets with blank) ? O(N) : O(1)
string removeBrackets(string str)
{
	for(int i=0; i<str.size(); i++)
	{
		if(str[i] == '(' || str[i] == ')' || 
		   str[i] == '[' || str[i] == ']' || 
		   str[i] == '{' || str[i] == '}')
		{
			str = str.replace(i, 1, "");
		}
	}
	return str;
}

int main()
{
	string str = "{[(a+b)-c]+(b*(a+d))}";

	string ans = removeBrackets(str);

	cout<<"Before -> "<<str<<endl;
	cout<<"After  -> "<<ans<<endl;

	return 0;
}