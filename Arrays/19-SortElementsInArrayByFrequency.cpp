#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){

    for(int i=0; i<n; i++){

        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// 2. HashMap & vecOfPair ? O(N*log(N)) : O(2N)
bool sortEle(pair<int, int> a, pair<int, int> b){

    // if(a.second == b.second)
    //     return a.first < b.first;

    // return a.second > b.second;
    return (a.second == b.second) ? a.first > b.first : a.second < b.second;
}

void sortByFrequency(int arr[], int n){

    unordered_map<int, int> mp;
    for(int i=0; i<n; i++) mp[arr[i]]++;
    
    vector<pair<int, int>> ele_freq;
    for(auto a: mp) ele_freq.push_back(a);
    
    sort(ele_freq.begin(), ele_freq.end(), sortEle);

    int end = n-1;
    for(auto a : ele_freq){
            
        while(a.second--){

            arr[end--] = a.first;
        } 
    }

    printArray(arr, n);
}

int main(){

    int n = 12;

    int arr[n] = {4,6,2,4,6,5,7,4,7,8,2,4};

    printArray(arr, n);

    sortByFrequency(arr, n);

    return 0;
}