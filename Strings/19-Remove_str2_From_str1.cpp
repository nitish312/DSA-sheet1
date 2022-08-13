// // 1. brute ? O(N1 * N2) -> O(N^2) : O(N) -> len of ans string
// #include<iostream>
// using namespace std;

// string removeStr2FromStr1(string str1, string str2){

// 	int n1 = str1.size(), n2 = str2.size();

// 	string ans = "";

// 	for(int i=0; i<n1; i++){

// 		int check = 0;

// 		for(int j=0; j<n2; j++){

// 			if(str2[j] == str1[i]){

// 				check = 1;
// 			}	
// 		}

// 		if(!check) ans += str1[i];
// 	}

// 	return ans;
// }

// int main(){

// 	string str1 = "abcdef";
//     string str2 = "cefz";

//     cout<<str1<<" -> "<<removeStr2FromStr1(str1, str2);

// 	return 0;
// }


// 2. map ? 3 * O(N) -> O(N) : O(N)
#include<iostream>
#include<unordered_map>
using namespace std;

string removeStr2FromStr1(string str1, string str2){

	int n1 = str1.size(), n2 = str2.size();

	unordered_map<char, int> mp;

	string ans = "";

	for(int i=0; i<n1; i++) mp[str1[i]]++;

	for(int i=0; i<n2; i++) mp[str2[i]]--;

	for(auto i: mp){

		if(i.second >= 1) ans += i.first;
	}

	return ans;
}

int main(){

	string str1 = "abcdef";
    string str2 = "cefz";

    cout<<str1<<" -> "<<removeStr2FromStr1(str1, str2);

	return 0;
}