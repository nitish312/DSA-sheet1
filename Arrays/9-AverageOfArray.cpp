#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){

    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;
}

// 1. get sum / n ? O(N) : O(1)
double getAverage(int arr[], int n){

    int sum = 0;

    for(int i=0; i<n; i++) sum += arr[i];

    return (double)sum/n;
}

int main(){

    int arr[] = {65,23,7,43,123,657,45,12};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(auto ele: arr) cout<<ele<<" ";
    cout<<endl;

    double avg = getAverage(arr, n);
    cout<<"Average of elements = "<<avg;

    return 0;
}