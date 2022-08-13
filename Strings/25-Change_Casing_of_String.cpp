// // 1. built-in func ? O(N) : O(1)
// #include<iostream>
// using namespace std;

// string changeCase(string str){

// 	int n = str.size();

// 	for(int i=0; i<n; i++){

// 		int ch = str[i];

// 		if(ch >= 65 && ch <= 90)
// 			str[i] = towlower(str[i]);
		
// 		if(ch >= 97 && ch <= 122)
// 			str[i] = towupper(str[i]);
// 	}

// 	return str;
// }

// int main(){

// 	string str = "tHe bEaST";

// 	string ans = changeCase(str);

// 	cout<<str<<" -> "<<ans<<endl;

// 	return 0;
// }



// 2. brute ? O(N) : O(1)
#include<iostream>
using namespace std;

string changeCase(string str){

	int n = str.size();

	for(int i=0; i<n; i++){

		int ch = str[i];

		if(ch >= 65 && ch <= 90)
			str[i] = str[i] + 32;
		
		if(ch >= 97 && ch <= 122)
			str[i] = str[i] - 32;
	}

	return str;
}

int main(){

	string str = "tHe bEaST";

	string ans = changeCase(str);

	cout<<str<<" -> "<<ans<<endl;

	return 0;
}