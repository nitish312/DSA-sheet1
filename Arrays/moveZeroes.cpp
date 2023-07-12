#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){

    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;
}

void moveZeroes(int arr[], int n){

    int start = 0;

    for(int i=0; i<n; i++){

        if(arr[i] != 0)
            arr[start++] = arr[i];
    }

    while(start != n) arr[start++] = 0;
    
    printArray(arr, n);
}

int main(){

    int n = 8;
    // int arr[8] = {65,23,7,43,123,657,45,12};
    int arr[8] = {1,3,0,0,2,0,3,0};

    for(auto ele: arr) cout<<ele<<" ";
    cout<<endl;

    moveZeroes(arr, n);

    return 0;
}