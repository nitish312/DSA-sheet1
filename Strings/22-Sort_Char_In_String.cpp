// // 1. sorting technique ? O(N^2) : O(1)
// #include<iostream>
// using namespace std;

// string sortedCharacters(string str){

// 	int n = str.size();

// 	for(int i=0; i<n-1; i++){

// 		for(int j=0; j<n-1-i; j++){

// 			if(str[j] > str[j+1]){

// 				char temp = str[j];
// 				str[j] = str[j+1];
// 				str[j+1] = temp;
// 			}
// 		}
// 	}

// 	return str;
// }

// int main(){

// 	string str = "bdcafge";

// 	string ans = sortedCharacters(str);

// 	cout<<str<<" -> "<<ans<<endl;

// 	return 0;
// }


// 2. built-in ? O(N*log(N)) : O(1)
#include<iostream>
#include<algorithm>
using namespace std;

string sortedCharacters(string str){

	sort(str.begin(), str.end());

	return str;
}

int main(){

	string str = "bdcafge";

	string ans = sortedCharacters(str);

	cout<<str<<" -> "<<ans<<endl;

	return 0;
}