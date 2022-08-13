// 1. brute ? O(N) : O(1)
#include<iostream>
using namespace std;

string capitalizeFirstNLastChar(string str){

	int n = str.size();

	for(int i=0; i<n; i++){

		if(i == 0 || i == n-1){

			str[i] = toupper(str[i]);
		}
		else if(str[i] == ' '){

			str[i-1] = toupper(str[i-1]);
			str[i+1] = toupper(str[i+1]);
		}
	}

	return str;
}

int main(){

	string str = "the beast brock lesnar";

	string ans = capitalizeFirstNLastChar(str);

	cout<<"Before -> "<<str<<endl;
	cout<<"After  -> "<<ans<<endl;

	return 0;
}