// 1. brute ? O(N) + O(N) for sunstr() -> O(N) 
//          : O(N) for ans string
#include<iostream>
using namespace std;

string getLargestWorld(string str){

	int n = str.size();
    
    int max_start = 0, max_length = 0;
    int start = 0, end = 0;

    while(end <= n){

        if(end < n && str[end] != ' ') end++;
        else{

            int curr_length = end - start;

            if(curr_length > max_length){

                   max_length = curr_length;
                   max_start = start;
            }

            start = ++end;
        }
    }

    string maxWord = str.substr(max_start, max_length);

    return maxWord;
}

int main(){

	string str = "the beast incarnate brock lesnar";

	string ans = getLargestWorld(str);

	cout<<"Largest Count Word -> "<<ans<<endl;

	return 0;
}