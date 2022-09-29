#include<bits/stdc++.h>
using namespace std;

// 1. brute ? O(N^2) : O(1)
int getSum(vector<int> nums, int start, int end)
{
    int sum = 0;

    for(int i=start; i<=end; i++) sum += nums[i];

    return sum;
}

int getEquilibriumIndex(vector<int> nums){

    int n = nums.size();

    for(int i=0; i<n; i++)
    {
        int leftSum = (i == 0) ? 0 : getSum(arr, 0, i-1);
        int rightSum = (i == n-1) ? 0 : getSum(arr, i+1, n-1);

        if(leftSum == rightSum) return i;
    }

    return -1;
}



// 2. pre-computation ? O(N) : O(N)
int getEquilibriumIndex(vector<int> nums){

    int n = nums.size();

    vector<int> preSum;

    int sum = 0;
    for(int i=0; i<n; i++){

        sum += nums[i];
        preSum.push_back(sum);
    }

    for(int i=0; i<n; i++)
    {
        int leftSum = (i == 0) ? 0 : preSum[i-1];
        int rightSum = (i == n-1) ? 0 : preSum[n-1] - preSum[i];

        if(leftSum == rightSum) return i;
    }

    return -1;
}

int main()
{
    vector<int> nums = {2, 3, -1, 8, 4};

    int ans = getEquilibriumIndex(nums);

    if(ans == -1) cout<<"There is no such index"<<endl;
    else cout<<"Equilibrium Index = "<<ans;

    return 0;
}