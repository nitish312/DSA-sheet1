#include<bits/stdc++.h>
using namespace std;

void printDuplicates(string str, vector<char>& chVec)
{
    int n = str.size();
    int chArr[26] = {0};
    for(int i=0; i<n; i++) chArr[str[i] - 'a']++;

    for(int i=0; i<26; i++)
    {
        if(chArr[i] > 1) cout<<chArr[i + 'a']<<" ";
    }
}

int main(){

	string str = "find repeating characters";

    vector<char> chVec;

	printDuplicates(str, chVec);

    for(auto i: chVec) cout<<i<<" ";

	return 0;
}