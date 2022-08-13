#include<iostream>
using namespace std;

int findSubIndexInStr(string str, string sub){

	int n1 = str.size(), n2 = sub.size();

	while(i < n1 && j < n2){

		if(str[i] == sub[j]){

			
		}
	}

	return -1;
}

int main(){

	string str = "the beast incarnate brock lesnar";
	string sub = "brock";

	int index = findSubIndexInStr(str, sub);
	if(index == -1) cout<<sub<<" is not present in "<<str;
	else cout<<sub<<" is present at index "<<index<<" in "<<str;

	return 0;
}