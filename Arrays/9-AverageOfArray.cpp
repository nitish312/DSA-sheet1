// by iterating ? O(N) : O(1)
#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){

    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;
}

double getAverage(int arr[], int n){

    int sum = 0;

    for(int i=0; i<n; i++) sum += arr[i];

    return (double)sum/n;
}

int main(){

    int arr[] = {65,23,7,43,123,657,45,12};
    int n = sizeof(arr) / sizeof(arr[0]);
    // int arr[8] = {1,3,0,0,2,0,3,0};

    for(auto ele: arr) cout<<ele<<" ";
    cout<<endl;

    double avg = getAverage(arr, n);
    cout<<"Average of elements = "<<avg;

    return 0;
}