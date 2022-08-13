// // using hashset ? O(NlogN) + O(N) -> O(NlogN) ? O(N)
// // logN to insert one elem into set


// using map ? 4times+ O(N) -> O(N) : O(N)
#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> vec, int n){

    for(int i=0; i<n; i++) cout<<vec[i]<<" ";
    cout<<endl;
}

void removeDuplicate(vector<int> &vec, int n){

    map<int, int> mp;

    for(int i=0; i<n; i++){
        
        if(mp.find(vec[i]) == mp.end()){

            // cout<<vec[i]<<" ";
            mp[vec[i]]++;
        }
    }
    vec.erase(vec.begin(), vec.end());
    // vec.clear();
    for(auto a: mp){
        vec.push_back(a.first);
    }
    printVec(vec, vec.size());
}

int main(){

    vector<int> vec = {2, 1, 4, 3, 2, 2, 3, 1};
    // {1,3,0,0,2,0,3,0}; {10,20,30,40,50,60,70,80}
    // {65,23,7,43,123,657,45,12}; 

    int n = vec.size();

    printVec(vec, n);

    removeDuplicate(vec, n);

    // printVec(vec, n);

    return 0;
}
