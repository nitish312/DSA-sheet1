#include<iostream>
using namespace std;

// 1. brute - push_back() ? O(N) : O(1)
string removeCharExceptAlphabets(string str){

	string ans;

	int n = str.size();

	for(int i=0; i<str.size(); i++){

		if((str[i] >= 'a' && str[i] <= 'z') || 
		   (str[i] >= 'A' && str[i] <= 'Z')){

			ans.push_back(str[i]);
		}
	}

	return ans;
}

int main(){

	string str = "fakt alpha09g4 bets 09$ theG$nar34$ ahe@";

	string ans = removeCharExceptAlphabets(str);

	cout<<"Before -> "<<str<<endl;
	cout<<"After -> "<<ans<<endl;

	return 0;
}