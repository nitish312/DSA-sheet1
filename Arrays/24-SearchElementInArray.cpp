#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> nums){

    int n = nums.size();

    for(int i=0; i<n; i++) cout<<nums[i]<<" ";
    cout<<endl;
}

// 1. linear search ? O(N) : O(1)
int linearSearch(vector<int> nums, int ele)
{
    int n = nums.size();
    for(int i=0; i<n; i++)
        if(nums[i] == ele) 
            return i;

    return -1;
}



// 2. binary search ? O(logN) : O(1)
int binarySearch(vector<int> nums, int ele)
{
    int  n = nums.size();
    int start = 0, end = n - 1, mid;
    while(start <= end)
    {
        mid = start + (end - start) / 2;
        if(nums[mid] == ele) return mid;
        else if(nums[mid] < ele) start = mid + 1;
        else if(nums[mid] > ele) end = mid - 1;
    }
    return -1;
}

int main(){

    vector<int> nums = {12, 34, 56, 78, 85, 91, 153, 426, 624, 753};

    int ele = 78;

    printVec(nums);

    int eleInd = linearSearch(nums, ele);

    if(eleInd == -1) cout<<ele<<" not present";
    else cout<<ele<<" present at position "<<eleInd;
    cout<<endl;

    sort(nums.begin(), nums.end());

    eleInd = binarySearch(nums, ele);

    if(eleInd == -1) cout<<ele<<" is not present is array";
    else cout<<ele<<" found at position "<<eleInd;
    cout<<endl;

    return 0;
}