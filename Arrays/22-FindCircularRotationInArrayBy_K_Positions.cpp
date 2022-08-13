#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int>& nums, int n){

    for(int i=0; i<n; i++) cout<<nums[i]<<" ";
    cout<<endl;
}

void rotateThem(vector<int>& nums, int start, int end){

    while(start <= end){

        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        start++;
        end--;
    }
}

int main(){

    vector<int> nums = {4, 5, 6};

    int n = nums.size();

    printVec(nums, n);

    int k = 2;

    k %= n;

    int start = 0, end = n - 1;

    rotateThem(nums, start, end - k);
    rotateThem(nums, end - k + 1, end);
    rotateThem(nums, start, end);

    printVec(nums, n);

    return 0;
}