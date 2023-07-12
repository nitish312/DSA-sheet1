#include<iostream>
#include<unordered_map>
using namespace std;

// 1. brute ? O(N1 * N2) -> O(N^2) : O(N) -> len of ans string
string removeStr2FromStr1(string str1, string str2)
{
	int n1 = str1.size(), n2 = str2.size();

	string ans = "";

	for(int i=0; i<n1; i++)
	{
		bool found = false;

		for(int j=0; j<n2; j++)
		{
			if(str1[i] == str2[j])
			{
				found = true;
				break;
			}
		}

		if(!found) ans += str1[i];
	}

	return ans;
}



// 2. HashMap ? 3 * O(N) -> O(N) : O(N)
string removeStr2FromStr1(string str1, string str2)
{
	int n1 = str1.size(), n2 = str2.size();

	unordered_map<char, int> mp;

	string ans = "";

	for(int i=0; i<n1; i++) mp[str1[i]]++;

	for(int i=0; i<n2; i++) mp[str2[i]]--;

	for(auto i: mp)
		if(i.second >= 1) 
			ans += i.first;
	
	return ans;
}

int main(){

	string str1 = "abcdef";
    string str2 = "cefz";

    cout<<str1<<" -> "<<removeStr2FromStr1(str1, str2);

	return 0;
}