// // 1. brute ? O(N ^ 2) : O(1)
// #include<iostream>
// using namespace std;

// string removeDuplicate(string str){

// 	int n = str.size();

// 	string ans = "";
	
// 	int index = 0;

// 	for(int i=0; i<n; i++){

// 		int j;
// 		for(j=0; j<i; j++){

// 			if(str[j] == str[i]) break;
// 		}

// 		if(j == i) ans += str[i];
// 	}

// 	return ans;
// }

// int main(){

// 	string str = "cbacdcbc";

// 	string ans = removeDuplicate(str);

// 	cout<<str<<endl;
// 	cout<<ans<<endl;

// 	return 0;
// }


// 2. set ? O(N) : O(N)
#include<iostream>
#include<unordered_set>
using namespace std;

string removeDuplicate(string str){

	int n = str.size();

	unordered_set<char> st;

	for(int i=0; i<n; i++) st.insert(str[i]);

	str = "";
	for(auto ch: st) str += ch;

	return str;
}

int main(){

	string str = "cbacdcbc";

	string ans = removeDuplicate(str);

	cout<<str<<endl;
	cout<<ans<<endl;

	return 0;
}


// 3. hashing ? O(N) : O(1) => GFG