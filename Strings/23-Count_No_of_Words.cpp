// // 1. brute ? O(N) : O(1)
// #include<iostream>
// using namespace std;

// int getNoOfWords(string str){

// 	int spaces = 0;

// 	int n = str.size();

// 	if((n == 0) || (str == " ")) return 0;

// 	for(int i=0; i<n; i++)
// 		if(str[i] == ' ') spaces++;
	
// 	return spaces + 1;
// }

// int main(){

// 	string str = " ";

// 	int no_of_words = getNoOfWords(str);

// 	cout<<"Total words in '"<<str<<"' = "<<no_of_words;

// 	return 0;
// }



// 2. accurate ? O(N) : O(1)
#include<iostream>
using namespace std;

int getNoOfWords(string str){

	int n = str.size();

	int ans = 0, i = 0, state = 0;
	while(str[i++]){

		if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t'){

			state = 0;
		}
		else if(state == 0){

			state = 1;
			ans++;
		}
	}
	
	return ans;
}

int main(){

	string str = "the beast   incarnate 	brock lesnar";

	int no_of_words = getNoOfWords(str);

	cout<<"Total words in '"<<str<<"' = "<<no_of_words;

	return 0;
}