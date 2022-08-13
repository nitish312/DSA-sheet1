// // using stack ? O(N + N) = O(N) : O(N)
// #include<bits/stdc++.h>
// using namespace std;

// void printArray(int arr[], int n){

//     for(int i=0; i<n; i++) cout<<arr[i]<<" ";
//     cout<<endl;
// }

// void reverseArray(int arr[], int n){

//     stack<int> stk;
//     // push(), pop(), empty() = O(1)
//     for(int i=0; i<n; i++) stk.push(arr[i]);

//     int i = 0;
//     while(!stk.empty()){

//         int ele = stk.top();
//         stk.pop();
        
//         arr[i++] = ele;        
//     }
// }

// int main(){

//     int n = 8;
//     int arr[8] = {10, 20, 30, 40, 50, 60, 70, 80};

//     printArray(arr, n);

//     reverseArray(arr, n);

//     printArray(arr, n);

//     return 0;
// }


// // inbuilt function ? O(N) : O(1)
// #include<bits/stdc++.h>
// using namespace std;

// void printArray(int arr[], int n){

//     for(int i=0; i<n; i++) cout<<arr[i]<<" ";
//     cout<<endl;
// }

// void reverseArray(int arr[], int n){

//     reverse(arr, arr+n);
// }

// int main(){

//     int n = 8;
//     int arr[8] = {10, 20, 30, 40, 50, 60, 70, 80};

//     printArray(arr, n);

//     reverseArray(arr, n);

//     printArray(arr, n);

//     return 0;
// }


// Even we can reverse using loop by iterating arr from end to start.
// ? O(N) + O(N) -> O(N) : O(N) -> (copying arr into another)


// by swap - Two Pointer ? O(N/2) : O(1)
#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){

    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;
}

void reverseArray(int arr[], int n){

    // int start = 0, end = n - 1;
    // while(start < end){
    //     swap(arr[start++], arr[end--]);
    // }

    int i = 0;
    while(i < n/2){
        
        int last = n - 1;
        swap(arr[i], arr[last - i]);
    }

    // for(int i=0; i<n/2; i++){

    //     int last = n - 1;
    //     swap(arr[i], arr[last - i]);
    // }
}

int main(){

    int n = 8;
    int arr[8] = {10, 20, 30, 40, 50, 60, 70, 80};

    printArray(arr, n);

    reverseArray(arr, n);

    printArray(arr, n);

    return 0;
}