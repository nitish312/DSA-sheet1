// // iterative ? O(T) * O(N) ->O(N^2) : O(1)
// // T is no. of times arr to rotate, N is no. of elem in arr.
#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> vec, int n){

    for(int i=0; i<n; i++) cout<<vec[i]<<" ";
    cout<<endl;
}

// Block Swap Algo. ? O(N) : O(1)
// default -> (anti-clockwise rotations)
#include<bits/stdc++.h>
using namespace std;

void printVec(int arr[], int n){

    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;
}

double getMedian(vector<int>& vec, int n){

	sort(vec.begin(), vec.end());

	if(n % 2 == 0){

		int m1 = n/2, m2 = n/2 - 1;
		double mean = (double)(vec[m1] + vec[m2]) / 2;
		return mean;
	}
	else{

		return vec[n/2];
	}
}

int main(){

    vector<int> vec = {1, 2, 3, 4};
    // {1,3,0,0,2,0,3,0}; {10,20,30,40,50,60,70,80}
    // {65,23,7,43,123,657,45,12}; 

    int n = vec.size();

    printVec(vec, n);

    cout<<"Median = "<<getMedian(vec, n);

    return 0;
}