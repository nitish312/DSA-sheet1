// sort func ? O(NlogN) + O(N/2) -> O(NlogN) : O(1)
#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){

    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";

    cout<<endl;
}

void halfReverse(int arr[], int start, int end){

    while(start < end){

        swap(arr[start++], arr[end--]); 
    }
}

void rearrange(int arr[], int n){

    sort(arr, arr + n);

    printArray(arr, n);

    int start = n / 2;
    int end = n - 1;
    halfReverse(arr, start, end);

    printArray(arr, n);
}

int main(){

    int n = 8;
    int arr[n] = {54, 23, 75, 12, 6, 4, 33, 8};

    printArray(arr, n);

    rearrange(arr, n);

    return 0;
}



// #include<bits/stdc++.h>
// using namespace std;

// void printArray(int arr[], int n){

//     for(int i=0; i<n; i++) cout<<arr[i]<<" ";
//     cout<<endl;
// }

// void rearrangeArray(int arr[], int n, bool inc){

//     for(int i=0; i<n-1; i++){

//         for(int j=0; j<n-1-i; j++){

//             bool condi = (inc == true) ? 
//                          arr[j] > arr[j+1] : 
//                          arr[j] < arr[j+1];
//             if(condi){
                
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }

//     printArray(arr, n);
// }

// int main(){

//     int n = 8;
//     int arr[8] = {65,23,7,43,123,657,45,12};
//     // int arr[8] = {1,3,0,0,2,0,3,0};

//     for(auto ele: arr) cout<<ele<<" ";
//     cout<<endl;

//     // true = ascending
//     // false = descending
//     bool order = true; // 
    
//     rearrangeArray(arr, n, true);
//     rearrangeArray(arr, n, false);

//     return 0;
// }