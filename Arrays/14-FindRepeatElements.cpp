#include<bits/stdc++.h>
using namespace std;

// using new array ? O(N^2) + O(N) = O(N^2) : O(N)
void repeatingElements(int arr[], int n){

    int dup[n];
    int start = 0;

    for(int i=0; i<n-1; i++){

        for(int j=i+1; j<n; j++){

            if(arr[j] == arr[i]){

                dup[start++] = arr[i];
            }
        }
    }

    for(int i=0; i<start; i++){
        
        if(dup[i] != dup[i+1])
            cout<<dup[i]<<" ";
    } 
    cout<<endl;
}

// using map ? O(N) ? O(N)
void repeatingElements(int arr[], int n){

    unordered_map<int, int> m;

    for(int i=0; i<n; i++) m[arr[i]]++;

    for(auto a: m){

        if(a.second > 1){ 
            cout<<a.first<<" ";
        }
    }
    cout<<endl;
}

int main(){

    int n = 14;

    int arr[n] = {2, 4, 3, 5, 5, 8, 6, 1, 7, 9, 3, 5, 4, 7};

    for(auto a: arr) cout<<a<<" ";
    cout<<endl;

    repeatingElements(arr, n);

    return 0;
}