#include<bits/stdc++.h>
using namespace std;

void printArr(int arr[], int n){

    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;
}

// 1. set&unordermap ? O(N*log(N)) + O(N) + O(N) -> O(N*log(N)) : O(2N) -> O(N)
void arrayRankTransform(int arr[], int n) {
        
    set<int> st;
        
    for(int i=0; i<n; i++) st.insert(arr[i]);
        
    unordered_map<int, int> mp;
        
    int rank = 1;
    for(auto &i: st) mp[i] = rank++;
        
    for(int i=0; i<n; i++){

        arr[i] = mp[arr[i]];
    }         
}

int main(){

    int n = 4;

    int arr[n] = {40,10,20,30};
    printArr(arr, n);

    arrayRankTransform(arr, n);
    printArr(arr, n);

    return 0;
}