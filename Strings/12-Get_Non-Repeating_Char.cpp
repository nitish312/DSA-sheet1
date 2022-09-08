#include<iostream>
#include<unordered_map>
using namespace std;

// 1. HashMap ? O(N) + O(N) -> O(N) : O(N)
void nonRepeatingChar(string str){

	int n = str.size();

	unordered_map<char, int> charFreq;

	for(int i=0; i<n; i++) charFreq[str[i]]++;

	for(auto i: charFreq){

		if(i.second == 1){

			cout<<i.first<<endl;
		}
	}
}



// 2. sorting ? O(N*logN) + O(N) -> O(N*logN) : O(1)
void nonRepeatingChar(string str){

	int n = str.size();

	sort(str.begin(), str.end());

	for(int i=0; i<n-1; i++){

		if(str[i] != str[i+1]){

			cout<<str[i]<<endl;
		}
		else{

			while(str[i] == str[i+1]) i++;
		}
	}
}

int main(){

	string str = "successful";

	nonRepeatingChar(str);

	return 0;
}