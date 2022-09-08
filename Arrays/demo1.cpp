// // iterative ? O(T) * O(N) ->O(N^2) : O(1)
// // T is no. of times arr to rotate, N is no. of elem in arr.
#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> vec){

    for(auto ele: vec) cout<<ele<<" ";
    cout<<endl;
}

void swapSubArray(vector<int>& vec, int start, int end, int k){

    int temp;
    for(int i=0; i<k; i++){

        temp = vec[i + start];
        vec[i + start] = vec[i + end];
        vec[i + end] = temp;
    }
}

void blockSwapAlgo(vector<int>& vec, int n, int k){

    if(k == 0 || k == n) return;

    int i = k, j = n - k;
    while(i != j){

        if(i < j){

            swapSubArray(vec, k-i, k-i+j, i);
            j -= i;
        }
        else{

            swapSubArray(vec, k-i, k, j);
            i -= j;
        }
    }

    swapSubArray(vec, k-i, k, i);
}

int main(){

    vector<int> vec = {10,20,30,40,50,60,70,80};
    // {1,3,0,0,2,0,3,0}; {10,20,30,40,50,60,70,80}
    // {65,23,7,43,123,657,45,12}; 

    printVec(vec);

    int n = vec.size();

    int k = 2;

    blockSwapAlgo(vec, n, k);

    printVec(vec);

    return 0;
}