// // 1. by sorting ? O(N log N) : O(1)
// #include<bits/stdc++.h>
// using namespace std;

// int main(){

// 	vector<int> vec = {456,76,23,76,87,2,57};
// 	int n = vec.size();
	
// 	for(int i=0; i<n; i++){
// 		cout<<vec[i]<<" ";
// 	}cout<<endl;

// 	sort(vec.begin(), vec.end());

// 	cout<<"Smallest = "<<vec[0]<<endl;
// 	cout<<"Largest = "<<vec[n-1]<<endl;

// 	return 0;
// }


// 2. by iterating ? O(N) : O(1)
#include<bits/stdc++.h>
using namespace std;

int main(){ 

	vector<int> vec = {456,76,23,76,87,2,57};
	int n = vec.size();
	
	for(int i=0; i<n; i++){
		cout<<vec[i]<<" ";
	}cout<<endl;

	int small = INT_MAX;
	int large = INT_MIN;

	for(auto a : vec){
		if(a < small) small = a;
		if(a > large) large = a;
	}

	cout<<"Smallest = "<<small<<endl;
	cout<<"Largest = "<<large<<endl;

	return 0; 
}


// cout<<"Largest = "<<large<<endl;cout<<"Largest = "<<large<<endl;cout<<"Largest = "<<large<<endl;cout<<"Largest = "<<large<<endl;cout<<"Largest = "<<large<<endl;cout<<"Largest = "<<large<<endl;cout<<"Largest = "<<large<<endl;cout<<"Largest = "<<large<<endl;cout<<"Largest = "<<large<<endl;cout<<"Largest = "<<large<<endl;