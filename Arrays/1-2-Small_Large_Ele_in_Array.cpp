#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> vec){

	for(auto i: vec) cout<<i<<" ";
	cout<<endl;
}

// // 1. by sorting ? O(N log N) : O(1)
void getSmallestLargest(vector<int> vec, int n){

	sort(vec.begin(), vec.end());

	cout<<"Smallest = "<<vec[0]<<endl;
	cout<<"Largest = "<<vec[n-1]<<endl;
}



// 2. by iterating ? O(N) : O(1)
void getSmallestLargest(vector<int> vec, int n){

	int small = INT_MAX;
	int large = INT_MIN;

	for(auto a : vec){
		if(a < small) small = a;
		if(a > large) large = a;
	}

	cout<<"Smallest = "<<small<<endl;
	cout<<"Largest = "<<large<<endl;
}

int main(){ 

	vector<int> vec = {456,76,23,76,87,2,57};
	int n = vec.size();
	
	getSmallestLargest(vec, n);

	printVec(vec);

	return 0; 
}