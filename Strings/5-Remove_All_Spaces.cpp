#include<iostream>
using namespace std;

// 1. brute ? O(N) : O(N)
string removeSpaces(string str){

	string ans;

	int n = str.size();

	for(int i=0; i<n; i++){

		if(str[i] == ' ') continue;

		ans.push_back(str[i]);
	}

	return ans;
}



// 2. brute ? O(N) : O(1)
string removeSpaces(string str){

	for(int i=0; i<str.size(); i++){

		if(str[i] == ' '){

			str = str.replace(i, 1, "");
		}
	}

	return str;
}



// 3. start ind ? O(N) : O(1)
string removeSpaces(string str){

	int count = 0; // spaces seen so far

	for(int i = 0; i<str.size(); i++){

		if(str[i] != ' ') // if whitespace is present
			str[count++] = str[i]; // remove whitespace & increment the count
	}

	str[count] = '\0';

	return str;
}

int main(){

	string str = "remove spaces from string";

	string ans = removeSpaces(str);

	cout<<"Before -> "<<str<<endl;
	cout<<"After -> "<<ans<<endl;

	return 0;
}