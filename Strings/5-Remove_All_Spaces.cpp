// // 1. brute ? O(N) : O(1)
// // push_back()
// #include<iostream>
// using namespace std;

// string removeSpaces(string str){

// 	string ans;

// 	int n = str.size();

// 	for(int i=0; i<n; i++){

// 		if(str[i] == ' ') continue;

// 		ans.push_back(str[i]);
// 	}

// 	return ans;
// }

// int main(){

// 	string str = "remove spaces from string";

// 	string ans = removeSpaces(str);

// 	cout<<"Before -> "<<str<<endl;
// 	cout<<"After -> "<<ans<<endl;

// 	return 0;
// }


// 2. brute ? O(N) : O(1)
// replace()
#include<iostream>
using namespace std;

string removeSpaces(string str){

	for(int i=0; i<str.size(); i++){

		if(str[i] == ' '){

			str = str.replace(i, 1, "");
		}
	}

	return str;
}

int main(){

	string str = "remove spaces from string";

	string ans = removeSpaces(str);

	cout<<"Before -> "<<str<<endl;
	cout<<"After -> "<<ans<<endl;

	return 0;
}