// // 1. map ? O(N) : O(N)
// #include<iostream>
// #include<unordered_map>
// using namespace std;

// char getMaxOccuringChar(string str){

// 	int n = str.size();

// 	unordered_map<char, int> charFreq;

// 	for(int i=0; i<n; i++) charFreq[str[i]]++;

// 	int maxCount = 0;
// 	for(auto i: charFreq)
// 		if(i.second > maxCount) 
// 			maxCount = i.second;
	
// 	for(auto i: charFreq)
// 		if(i.second == maxCount) 
// 			cout<< i.first<<maxCount<<endl;

// 	return 'Z';
// }

// int main(){

// 	string str = "the beast";

// 	char maxOccuring = getMaxOccuringChar(str);

// 	cout<<maxOccuring;

// 	return 0;
// }


// 2. optimal ? O(N) : O(26) -> O(1)
#include<iostream>
using namespace std;

char getMaxOccuringChar(string str){

	int n = str.size();

	char ans;
    int maxfreq = 0;

    int count[256] = {0};

    for(int i=0; i<n; i++){

        count[str[i]]++;

        if(count[str[i]] > maxfreq){

            maxfreq = count[str[i]];
            ans = str[i];
        }
    }
    
    return ans;
}

int main(){

	string str = "the beast";

	char maxOccuring = getMaxOccuringChar(str);

	cout<<maxOccuring;

	return 0;
}