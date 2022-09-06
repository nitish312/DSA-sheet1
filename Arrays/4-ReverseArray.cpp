#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){

    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;
}

// using stack ? O(N + N) = O(N) : O(N)
void reverseArray(int arr[], int n){

    stack<int> stk; // push(), pop(), empty() = O(1)
    for(int i=0; i<n; i++) stk.push(arr[i]);

    int i = 0;
    while(!stk.empty()){

        int ele = stk.top();
        stk.pop();
        
        arr[i++] = ele;        
    }
}



// by creating another array - 
// store array by iterating from end into another array & replace it with new array
// ? O(N) + O(N) -> O(N) : O(N) -> (copying arr into another)



// inbuilt function ? O(N) : O(1)
void reverseArray(int arr[], int n){

    reverse(arr, arr+n);
}



// Two Pointer & swap ? O(N/2) : O(1)
void reverseArray(int arr[], int n){

    int start = 0, end = n - 1;
    while(start < end){
        swap(arr[start++], arr[end--]);
    }
}


int main(){

    int n = 8;
    int arr[8] = {10, 20, 30, 40, 50, 60, 70, 80};

    printArray(arr, n);

    reverseArray(arr, n);

    printArray(arr, n);

    return 0;
}