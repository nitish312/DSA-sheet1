// 1. brute ? O(N) : O(1)
#include<iostream>
using namespace std;

string removeBrackets(string str){

	int n = str.size();

	string ans;

	for(int i=0; i<n; i++){

		if(str[i] == '(' || str[i] == ')' || str[i] == '[' || str[i] == ']' || str[i] == '{' || str[i] == '}'){

			continue;
		}

		ans.push_back(str[i]);
	}

	return ans;
}

int main(){

	string str = "{[(a+b)-c]+(b*(a+d))}";

	string ans = removeBrackets(str);

	cout<<"Before -> "<<str<<endl;
	cout<<"After  -> "<<ans<<endl;

	return 0;
}