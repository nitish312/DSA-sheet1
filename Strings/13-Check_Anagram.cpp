#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;

// 1. HashMap ? O(n1) + O(n2) + O(N) -> O(N) : O(N)
bool isAnagram(string s1, string s2){

	int n1 = s1.size(), n2 = s2.size();

	if(n1 != n2) return false;

	unordered_map<char, int> alphabets;

	for(int i=0; i<n1; i++) alphabets[s1[i]]++;
	for(int i=0; i<n2; i++) alphabets[s2[i]]--;

	for(auto i: alphabets){

		if(i.second != 0) return false;
	}

	return true;
}



// 2. sort ? O(N*logN) + O(N*logN) + O(n1) -> O(N*logN) : O(1)
bool isAnagram(string s1, string s2){

	int n1 = s1.size(), n2 = s2.size();

	if(n1 != n2) return false;

	sort(s1.begin(), s1.end());
	sort(s2.begin(), s2.end());

	for(int i=0; i<n1; i++){

		if(s1[i] != s2[i]) return false;
	}

	return true;
}



// 3. array ? O(N) + O(N) + O(N) -> O(N) : O(1)
bool isAnagram(string s1, string s2){

	int n = s1.size(), n2 = s2.size();

	if(n != n2) return false;

	int freq[26] = {0};

	for(int i=0; i<n; i++){ 
		freq[s1[i] - 'a']++;
		freq[s2[i] - 'a']--;
	}

	for(int i=0; i<26; i++){

		if(freq[i] != 0) return false;
	}

	return true;
}

int main(){

	string s1 = "racecar";
	string s2 = "carrace";

	if(isAnagram(s1, s2)) 
		cout<<"Yes, "<<s1<<" & "<<s2<<" are anagram strings"<<endl;
	else 
		cout<<"No, "<<s1<<" & "<<s2<< " are not anagram strings"<<endl;

	return 0;
}