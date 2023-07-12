#include<iostream>
using namespace std;

// 1. brute - get nums into string, sum += stoi(string) ? O(N) : O(N) for numString
int sumNumbers(string str)
{
	int sum = 0, n = str.size();
	string numString = "";

	for(int i=0; i<n; i++)
	{
		if(str[i] >= '0' && str[i] <= '9')
		{
			// numString.push_back(str[i]);
			numString += str[i];
		}
		else
		{
			if(numString == "") continue;

			sum += stoi(numString);
			numString = "";
		}
	}
	return sum;
}

int main(){

	string str = "123xy3m124jd2";

	cout<<str<<endl;

	int sum = sumNumbers(str);
	cout<<"Sum = "<<sum;

	return 0;
}