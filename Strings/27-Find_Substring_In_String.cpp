// 1. brute ? O(N^2) : O(1)
#include<iostream>
using namespace std;

int findSubIndexInStr(string str, string sub){

	int n1 = str.size(), n2 = sub.size();
	for(int i=0; i<n1; i++){

		int temp = i;
		int j = 0;
		while(j < n2){

			if(sub[j] != str[temp]) break;

			temp++;
			j++;
		}

		if(j == n2) return i;
	}

	return -1;
}

int main(){

	string str = "findsubindexinstr";
	string sub = "index";

	int index = findSubIndexInStr(str, sub);
	if(index == -1) cout<<sub<<" is not present in "<<str;
	else cout<<sub<<" is present at index "<<index<<" in "<<str;

	return 0;
}



// // 2. in-built ? O(N) : O(1)
// #include<iostream>
// using namespace std;

// int findSubIndexInStr(string str, string sub){

// 	int index = str.find(sub);

// 	return index;
// }

// int main(){

// 	string str = "findsubindexinstr";
// 	string sub = "index";

// 	int index = findSubIndexInStr(str, sub);
// 	if(index == -1) cout<<sub<<" is not present in "<<str;
// 	else cout<<sub<<" is present at index "<<index<<" in "<<str;

// 	return 0;
// }