// // 1. map ? O(N) : O(26) -> O(1)
// // O(1), since the string has only 26 chars, 
// // the size of the HashMap doesn’t exceed 26, 
// // irrespective of how big the input string is.
// #include<iostream>
// #include<unordered_map>
// using namespace std;

// void printDuplicates(string str){

// 	int n = str.size();

// 	unordered_map<char, int> charFreq;

// 	for(int i=0; i<n; i++) charFreq[str[i]]++;

// 	for(auto ch: charFreq)
// 		if(ch.second > 1) 
// 			cout<<ch.first<<" -> "<<ch.second<<endl;
// }

// int main(){

// 	string str = "the beast";

// 	printDuplicates(str);

// 	return 0;
// }


// 2. array ? O(N) : O(1)
#include<iostream>
using namespace std;

void printDuplicates(string str){

	int n = str.size();

	int charFreq[26] = {0};

	for(int i=0; i<n; i++) 
		charFreq[str[i] - 'a']++;

	for(int i=0; i<26; i++)
		if(charFreq[i] > 1)
			cout<<(char)(i + 'a')<<" -> "<<charFreq[i]<<endl;
}

int main(){

	string str = "the beast";

	printDuplicates(str);

	return 0;
}