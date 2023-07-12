#include<iostream>
using namespace std;

// 1. brute ? O(N) : O(N)
string removeAllVowels(string str)
{
	string ans;
	int n = str.size();
	for(int i=0; i<n; i++)
	{
		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
		   str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){

			continue;
		}
		ans.push_back(str[i]);
	}
	return ans;
}



// 2. replace() ? O(N) : O(1)
string removeAllVowels(string str)
{
	for(int i=0; i<str.size(); i++)
	{
		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || 
		   str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
		{
			str = str.replace(i, 1, "");
	      	i--;
		}
	}
	return str;
}

int main()
{
	string str = "remove all vowels from the string";

	string ans = removeAllVowels(str);

	cout<<"Before -> "<<str<<endl;
	cout<<"After  -> "<<ans<<endl;

	return 0;
}