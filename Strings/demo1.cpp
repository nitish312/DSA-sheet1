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

#include<bits/stdc++.h>
using namespace std;

// 3. count array ? O(N) : O(1)
char getMaxOccuringChar(string str)
{
    int n = str.size();

    char ans;
    int maxi = 0;

    int count[26] = {0};

    for(int i=0; i<n; i++){

        count[str[i] - 'a']++;
        if(count[str[i] - 'a'] > maxi)
        {
            maxi = count[i];
            ans = count[str[i] + 'a'];
        }
    }

    // for(int i=0; i<26; i++)
    // {
    //     if(count[i] > maxi)
    //     {
    //         maxi = count[i];
    //         ans = count[i] + 'a';
    //     }
    // }
    
    cout<<maxi;
    return ans;
}

int main(){

	string str = "brock lesnar";

	char maxOccuring = getMaxOccuringChar(str);

	cout<<maxOccuring;

	return 0;
}