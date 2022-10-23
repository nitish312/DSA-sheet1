// 1. type casting ? O(N) : O(1)
#include<iostream>
using namespace std;

string charToNextChar(string str)
{
	int n = str.size();

	for(int i=0; i<n; i++)
	{
		int ascii = (int)str[i];

		if(ascii == 90) str[i] = (char)65;
		else if(ascii == 122) str[i] = (char)97;
		else if((ascii >= 65 && ascii < 90) || 
			    (ascii >= 97 && ascii < 122))
		{
			str[i] = (char)(ascii + 1);
		}
	}

	return str;
}

int main(){

	string str = "abcdDexyz";

	string ans = charToNextChar(str);

	cout<<str<<" -> "<<ans<<endl;

	return 0;
}