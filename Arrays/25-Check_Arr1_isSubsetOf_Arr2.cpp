// // brute force ? O(len1 * len2) : O(1)
// #include<bits/stdc++.h>
// using namespace std;

// bool linearSearch(int ele, vector<int> arr, int n){

//     for(int i=0; i<n; i++){

//         if(arr[i] == ele) return true;
//     }

//     return false;
// }

// bool isSubsetOf(vector<int> arr1, int len1, vector<int> arr2, int len2){

//     for(int i=0; i<len2; i++){

//         int ele = arr2[i];

//         if(linearSearch(ele, arr1, len1)) continue; 
//         else return false;
//     }

//     return true;
// }

// int main(){

//     vector<int> arr1 = {10, 20, 30, 40, 50, 60, 70, 80, 90};
//     vector<int> arr2 = {50, 90, 70, 80};

//     int len1 = arr1.size();
//     int len2 = arr2.size();

//     if(isSubsetOf(arr1, len1, arr2, len2)) cout<<"Yes, it is";
//     else cout<<"No, its not";

//     return 0;
// }


// // binary search ? O(NlogN + M*logN) : O(1)
// // N = len1, M = len2
// #include<bits/stdc++.h>
// using namespace std;

// bool binarySearch(int key, vector<int> arr, int n){

//     int start = 0, end = n - 1, mid;
//     while(start <= end){

//         mid = start + (end - start) / 2;

//         if(arr[mid] == key) return true;
//         else if(arr[mid] < key) start = mid + 1;
//         else end = mid - 1;
//     }

//     return false;
// }

// bool isSubsetOf(vector<int> arr1, int len1, vector<int> arr2, int len2){

//     sort(arr1.begin(), arr1.end());

//     for(int i=0; i<len2; i++){

//         int ele = arr2[i];

//         if(binarySearch(ele, arr1, len1)) continue;
//         else return false;
//     }

//     return true;
// }

// int main(){

//     vector<int> arr1 = {10, 20, 30, 40, 50, 60, 70, 80, 90};
//     vector<int> arr2 = {50, 90, 30, 80};

//     int len1 = arr1.size();
//     int len2 = arr2.size();

//     if(isSubsetOf(arr1, len1, arr2, len2)) cout<<"Yes, it is";
//     else cout<<"No, its not";

//     return 0;
// }

// using map ? O(N + M) : O(N)
#include<bits/stdc++.h>
using namespace std;

bool isSubsetOf(vector<int> arr1, int len1, vector<int> arr2, int len2){

    unordered_map<int, bool> arr1Map;

    int i;
    for(int i=0; i<len1; i++){

        arr1Map[arr1[i]] = true;
    }

    for(i=0; i<len2; i++){

        int ele = arr2[i];
        if(arr1Map.find(ele) == arr1Map.end()){

            return false;
        }
    }

    return true;
}

int main(){

    vector<int> arr1 = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    vector<int> arr2 = {70, 90, 20, 30, 80};

    int len1 = arr1.size();
    int len2 = arr2.size();

    if(isSubsetOf(arr1, len1, arr2, len2)) cout<<"Yes, it is";
    else cout<<"No, its not";

    return 0;
}