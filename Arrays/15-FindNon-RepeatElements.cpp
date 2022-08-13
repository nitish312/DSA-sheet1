#include<bits/stdc++.h>
using namespace std;

// brute force ? O(N^2) : O(1)
void nonRepeatingElements(int arr[], int n){

    for(int i=0; i<n; i++){

        bool check = false;
        for(int j=0; j<n; j++){

            if(i != j && arr[j] == arr[i]){

                check = true;
                break;
            }
        }
        if(!check) cout<<arr[i]<<" ";
    }
}

// using sort ? O(N^2) : O(1)
void nonRepeatingElements(int arr[], int n){

    sort(arr, arr+n);

    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;

    for(int i=0; i<n; i++){

        if(arr[i] == arr[i+1]){

            while(arr[i] == arr[i+1]) i++;
        }
        else{
            cout<<arr[i]<<" ";
        } 
    }
}

// using map ? O(N) : O(N)
void nonRepeatingElements(int arr[], int n){

    unordered_map<int, int> m;

    for(int i=0; i<n; i++) m[arr[i]]++;

    for(auto a: m){

        if(a.second == 1) 
            cout<<a.first<<" ";
    } 
    cout<<endl;
}

int main(){

    int n = 14;

    int arr[n] = {2, 4, 3, 5, 5, 8, 6, 1, 7, 9, 3, 5, 4, 7};

    nonRepeatingElements(arr, n);

    return 0;
}