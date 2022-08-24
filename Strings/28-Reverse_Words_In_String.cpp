#include<iostream>
#include<algorithm>
using namespace std;

void swapThem(string& str, int a, int b){

	int temp = str[a];
	str[a] = str[b];
	str[b] = temp;
}

void reverseIt(string& str, int start, int end){

	while(start < end){

		swapThem(str, start++, end--);
	}
}

void reverseAllWords(string str){

	reverseIt(str, 0, str.size()-1);

	str += " ";

	int n = str.size();

	int start = 0, end;
	for(int i=0; i<n; i++){

		if(str[i] == ' '){

			end = i - 1;
			reverseIt(str, start, end);
			start = i + 1;
		}
	}

	cout<<str<<endl;
}

int main(){

	string str = "the beast incarnate brock lesnar";

	cout<<str<<endl;

	reverseAllWords(str);

	return 0;
}