#include<iostream>
#include<unordered_map>
using namespace std;

// 1. Hashmap ? O(N) + O(N) -> O(N) : O(N)
void getCharFreq(string str){

	unordered_map<char, int> charFreq;

	int n = str.size();

	for(int i=0; i<n; i++){

		charFreq[str[i]]++;
	}

	for(auto i: charFreq){

		cout<<i.first<<" -> "<<i.second<<endl;
	}
}



// 2. by sorting ? O(N*logN) + O(N) -> O(N*logN) : O(1)
void getCharFreq(string str){

	sort(str.begin(), str.end());

	int n = str.size();

	int count = 1;
	for(int i=0; i<n; i++){

		if(str[i] == str[i+1]){

			count++;
		}
		else{
			cout<<str[i]<<" -> "<<count<<endl;
			count = 1;
		}
	}
}

int main(){

	string str = "success";

	getCharFreq(str);

	return 0;
}



// #include<iostream>
// #include<algorithm>
// using namespace std;



// int main(){

// 	string str = "success";

// 	getCharFreq(str);

// 	return 0;
// }


// 3. optimal ? O(N) + O(26) -> O(N) : O(1)
#include<iostream>
using namespace std;

void getCharFreq(string str){

	int charFreq[26] = {0};

	int n = str.size();

	for(int i=0; i<n; i++){

		charFreq[str[i] - 'a']++;
	}

	for(int i=0; i<26; i++){

		if(charFreq[i] != 0){

			cout<<(char)(i + 'a')<<" -> "<<charFreq[i]<<endl;
		}
	}
}

int main(){

	string str = "success";

	getCharFreq(str);

	return 0;
}