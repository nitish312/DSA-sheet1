#include<iostream>
using namespace std;

// count all using if-else ladder ? O(N) : O(1)
void countEverything(string str){

	int vowels = 0, consonants = 0, digits = 0, spaces = 0, special_symbols = 0;

	int n = str.size();

	for(int i=0; i<n; i++){

		if(str[i] == 'a' || str[i] == 'E' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
		   str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){

			vowels++;
		}
		else if((str[i] > 'a' && str[i] <= 'z') || (str[i] > 'A' && str[i] <= 'Z')){

			consonants++;
		}
		else if(str[i] >= '0' && str[i] <= '9') digits++;
		else if(str[i] == ' ') spaces++;
		else special_symbols++;
	}

	cout<<"Count of vowels = "<<vowels<<endl;
	cout<<"Count of consonants = "<<consonants<<endl;
	cout<<"Count of digits = "<<digits<<endl;
	cout<<"Count of spaces = "<<spaces<<endl;
	cout<<"Count of special symbols = "<<special_symbols<<endl;
}

int main(){
	
	string str = "just say something 34h %i$ d# 3 89 anythinG";

	countEverything(str);

	return 0;
}