#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

// brute force ? O(N^2) : O(1)
void printSymmetricPairs(vector<vector<int>> arr){

    for(int i=0; i<n; i++){

        for(int j=i+1; j<n; j++){

            if(arr[j][0] == arr[i][1] && arr[j][1] == arr[i][0]){

                cout<<"("<<arr[i][1]<<" "<<arr[i][0]<<")"<<endl;
            }
        }
    }
}



// using map ? O(N) : O(N)
void printSymmetricPairs(vector<vector<int>> arr){

    unordered_map<int, int> mp;

    for(int i=0; i<n; i++){

        int first = arr[i][0];
        int second = arr[i][1];

        if(mp.find(second) != mp.end() && mp[second] == first){

            cout<<"("<<first<<" "<<second<<")"<<endl;
        }
        else{

            mp[first] = second;
        }
    }
}

int main(){

    int n = 5;
    
    vector<vector<int>> arr = {{1, 2}, {2, 1}, {3, 4}, {4, 5}, {5, 4}};

    printSymmetricPairs(arr);

    return 0;
}