#include<iostream>
using namespace std;

// 1. HashMap ? O(N) : O(N)
char getMaxOccuringChar(string str)
{
    unordered_map<char, int> freqCount;
    int n = str.size();
    int maxi = 0;
    char ans;
    for(int i=0; i<n; i++)
    {
        freqCount[str[i]]++;
        if(freqCount[str[i]] > maxi)
        {
            maxi = freqCount[str[i]];
            ans = str[i];
        }
    }
    return ans;
}



// 2. sort ? O(N*log(N)) + O(N) -> O(N*log(N)) : O(1)
char getMaxOccuringChar(string str)
{
    sort(str.begin(), str.end());
    int maxi = 0;
    char ans;
    int n = str.size();
    for(int i=0; i<n-1; i++)
    {
        int count = 1;
        if(str[i] == str[i+1]) count++;
        if(count > maxi)
        {
            maxi = count;
            ans = str[i];
        }
    }
    return ans;
}



// 3. count array ? O(N) : O(1)
char getMaxOccuringChar(string str)
{
    int n = str.size();

    char ans;
    int maxi = 0;

    int count[256] = {0}; 
    // follow-up -> try using count[26]s

    for(int i=0; i<n; i++){

        count[str[i]]++;

        if(count[str[i]] > maxi){

            maxi = count[str[i]];
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