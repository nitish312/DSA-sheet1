// clockwise approach ? O(N) : O(1)
#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> nums){

    int n = nums.size();
    for(int i=0; i<n; i++){

        cout<<nums[i]<<" ";
    }
    cout<<endl;
}

void reverseIt(vector<int>& nums, int start, int end){
        
    while(start < end) swap(nums[start++], nums[end--]);
}

// 1. Brute ? O(N*K) : O(1)
void helper(vector<int>& nums, int n)
{

    int last = nums[n-1];
    for(int i=n-1; i>0; i--)
    {
        nums[i] = nums[i-1];
    }
    nums[0] = last;
}
    
void rotate(vector<int>& nums, int k){
        
    int n = nums.size();
    
    for(int i=0; i<k; i++) helper(nums, n);
}



// 2. k mod n and 3 reversals ? O(N) : O(1)
void reverseIt(vector<int>& nums, int start, int end){
        
    while(start < end) swap(nums[start++], nums[end--]);
}
    
void rotate(vector<int>& nums, int k){
        
    int n = nums.size();
    
    k %= n;
    
    int start = 0, end = n - 1;
    
    reverseIt(nums, start, end - k); // O(N/2)
    reverseIt(nums, end - k + 1, end); // O(N/2)
    reverseIt(nums, start, end); // O(N)
}

int main(){

    vector<int> nums = {1,2,3,4,5,6,7};
    int k = 3;

    printVec(nums);

    rotate(nums, k);
    printVec(nums);

    return 0;
}

/*
Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
*/