check out sht2 solution

// // using hashset ? O(NlogN) + O(N) -> O(NlogN) : O(N)
// // logN to insert one elem into set
// #include<bits/stdc++.h>
// using namespace std;

// void printVec(vector<int> vec, int n){

//     for(int i=0; i<n; i++) cout<<vec[i]<<" ";
//     cout<<endl;
// }

// void removeDuplicate(vector<int> &vec, int n){

//     set<int> uniqEle;
//     //unordered_set<int> uniqEle;

//     for(auto a: vec) uniqEle.insert(a);

//     for(auto ele: uniqEle) cout<<ele<<" ";
// }

// int main(){

//     vector<int> vec = {1, 2, 2, 3, 4, 4};
//     // {1,3,0,0,2,0,3,0}; {10,20,30,40,50,60,70,80}
//     // {65,23,7,43,123,657,45,12}; 

//     int n = vec.size();

//     printVec(vec, n);

//     removeDuplicate(vec, n);

//     // printVec(vec, n);

//     return 0;
// }



// // two pointers ? O(N) : O(1)
#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> vec, int n){

    for(int i=0; i<n; i++) cout<<vec[i]<<" ";
    cout<<endl;
}

int removeDuplicate(vector<int> &vec, int n){ 

    int i=0;

    for(int j=1; j<n; j++){

        if(vec[j] != vec[i]){

            // vec[++i] = vec[j];
            i++;
            vec[i] = vec[j];
        }
    }
    
    return i + 1; // i+1 elems in updated arr
}

int main(){

    vector<int> vec = {1, 2, 2, 3, 4, 4};
    // {1,3,0,0,2,0,3,0}; {10,20,30,40,50,60,70,80}
    // {65,23,7,43,123,657,45,12}; 

    int n = vec.size();

    printVec(vec, n);

    // k = n - dups 
    int k = removeDuplicate(vec, n);
    for(int i=0; i<k; i++) cout<<vec[i]<<" ";

    // printVec(vec, n);

    return 0;
}