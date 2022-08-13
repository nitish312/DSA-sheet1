#include<bits/stdc++.h>
using namespace std;

// brute force ? O(N + 1 + N) = O(N) : O(1)

void printArray(int arr[], int n){

    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;
}

// O(1)
void addElementAt_end(int arr[], int& n, int ele){

    arr[n++] = ele;
}

// O(N)
void addElementAt_start(int arr[], int& n, int ele){

    for(int i=n; i>0; i--){

        arr[i] = arr[i-1];
    }

    arr[0] = ele;
    n++;
}

// O(N)
void addElementAt_pos(int arr[], int& n, int ele, int index){

    for(int i=n; i>index; i--){

        arr[i] = arr[i-1];
    }

    arr[index] = ele;
    n++;
}

int main(){

    int n = 5;

    int arr[n] = {10, 20, 30, 40, 50};

    printArray(arr, n);
    
    int ele;
    
    ele = 777;
    addElementAt_end(arr, n, ele);
    
    ele = 999;
    addElementAt_start(arr, n, ele);
    
    ele = 10000;
    int pos = 4;
    addElementAt_pos(arr, n, ele, pos-1);

    printArray(arr, n);

    return 0;
}