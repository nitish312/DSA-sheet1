// sort func ? O(NlogN) + O(N/2) -> O(NlogN) : O(1)
#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){

    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";

    cout<<endl;
}

void halfReverse(int arr[], int start, int end){

    while(start < end){

        swap(arr[start++], arr[end--]); 
    }
}

void rearrange(int arr[], int n){

    sort(arr, arr + n);

    printArray(arr, n);

    int start = n / 2;
    int end = n - 1;
    halfReverse(arr, start, end);

    printArray(arr, n);
}

int main(){

    int n = 8;
    int arr[n] = {54, 23, 75, 12, 6, 4, 33, 8};

    printArray(arr, n);

    rearrange(arr, n);

    return 0;
}