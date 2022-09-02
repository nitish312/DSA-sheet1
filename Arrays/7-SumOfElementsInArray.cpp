// // iterating ? O(N) : O(1)
// #include<bits/stdc++.h>
// using namespace std;

// void printArray(int arr[], int n){

//     for(int i=0; i<n; i++) cout<<arr[i]<<" ";
//     cout<<endl;
// }

// int calcSum(int arr[], int n){

//     int sum = 0;

//     for(int i=0; i<n; i++) sum += arr[i];

//     return sum;
// }

// int main(){

//     int n = 8;
//     int arr[8] = {65,23,7,43,123,657,45,12};
//     // int arr[8] = {1,3,0,0,2,0,3,0};

//     for(auto ele: arr) cout<<ele<<" ";
//     cout<<endl;

//     int sum = calcSum(arr, n);
//     cout<<"Sum of elements = "<<sum;

//     return 0;
// }


// STL:accumulate() ? O(N) : O(1)
#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){

    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;
}

int calcSum(int arr[], int n){

    int sum = accumulate(arr, arr + n, 0);

    return sum;
}

int main(){

    int n = 8;
    int arr[n] = {65,23,7,43,123,657,45,12};
    // int arr[8] = {1,3,0,0,2,0,3,0};

    for(auto ele: arr) cout<<ele<<" ";
    cout<<endl;

    int sum = calcSum(arr, n);
    cout<<"Sum of elements = "<<sum;

    return 0;
}