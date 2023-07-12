// // 1. brute ? O(1) : O(1)
// #include<iostream>
// using namespace std;

// string concatenate(string s1, string s2){

// 	s1 += s2;

// 	return s1;
// }

// int main(){

// 	string str1 = "brock ";
// 	string str2 = "beast ";

// 	string ans = concatenate(str1, str2);

// 	cout<<str2<<" is concatenated to "<<str1<<" -> "<<ans;

// 	return 0;
// }


// 2. strcat() ? O(1) : O(1)
#include<iostream>
#include<cstring>
using namespace std;

string concatenate(string s1, string s2){

	s1.append(s2);

	return s1;
}

int main(){

	string str1 = "one ";
	string str2 = "two ";

	string ans = concatenate(str1, str2);

	cout<<str2<<" is concatenated to "<<str1<<" -> "<<ans;

	return 0;
}