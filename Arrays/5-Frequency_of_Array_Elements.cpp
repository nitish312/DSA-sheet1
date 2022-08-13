// // keeping visited arr ? O(N + N^2) = O(N^2) : O(N)
// #include<bits/stdc++.h>
// using namespace std;

// void printArray(int arr[], int n){

//     for(int i=0; i<n; i++) cout<<arr[i]<<" ";
//     cout<<endl;
// }

// void countFrequency(int arr[], int n){

//     // bool visited[n];
//     // for(int i=0; i<n; i++){

//     //     visited[i] = false;
//     // }
//     vector<bool> visited(n, false);

//     for(int i=0; i<n; i++){

//         if(visited[i]) continue;

//         int curr = arr[i];
//         int count = 1;
//         for(int j=i+1; j<n; j++){

//             if(arr[j] == curr){

//                 count++;
//                 visited[j] = true;
//             }
//         }

//         cout<<curr<<" -> "<<count<<endl;
//     }
// }

// int main(){

//     int n = 8;
//     // int arr[8] = {65,23,7,43,123,657,45,12};
//     int arr[8] = {1,3,4,3,2,4,3,1};

//     printArray(arr, n);

//     countFrequency(arr, n);

//     return 0;
// }


// using map ? O(N + N) = O(N) : O(N)
#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){

    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;
}

void countFrequency(int arr[], int n){

    unordered_map<int, int> mp;

    for(int i=0; i<n; i++) mp[arr[i]]++;

    for(auto ele: mp){
        cout<<ele.first<<" -> "<<ele.second<<endl;
    }
}

int main(){

    int n = 8;
    // int arr[8] = {65,23,7,43,123,657,45,12};
    int arr[8] = {1,3,4,3,2,4,3,1};

    printArray(arr, n);

    countFrequency(arr, n);

    return 0;
}