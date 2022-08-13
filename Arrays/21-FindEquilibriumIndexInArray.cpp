// // brute force ? O(N^2) : O(1)
// #include<bits/stdc++.h>
// using namespace std;

// int getSum(vector<int> nums, int start, int end){

//     int sum = 0;
//     for(int i=start; i<=end; i++){

//         sum += nums[i];
//     }

//     return sum;
// }

// int getEquilibriumIndex(vector<int> nums){

//     int n = nums.size();

//     for(int i=0; i<n; i++){

//         int curr = i;

//         int leftSum = (curr == 0) ? 0 : getSum(nums, 0, curr - 1);
//         int rightSum = (curr == n-1) ? 0 : getSum(nums, curr + 1, n - 1);

//         if(leftSum == rightSum) return curr;
//     }

//     return -1;
// }

// int main(){

//     vector<int> nums = {2, 3, -1, 8, 4};

//     int equilibriumInd = getEquilibriumIndex(nums);

//     if(equilibriumInd == -1) 
//         cout<<"There is no such index"<<endl;
//     else 
//         cout<<"Equilibrium Index = "<<equilibriumInd;

//     return 0;
// }


// Better-approach pre-computation ? O(N) : O(N)
#include<bits/stdc++.h>
using namespace std;

int getEquilibriumIndex(vector<int> nums){

	int n = nums.size();

	vector<int> preSum;

    int sum = 0;
    for(int i=0; i<n; i++){

    	sum += nums[i];
    	preSum.push_back(sum);
    }

    for(int i=0; i<n; i++){

        int curr = i;

        int leftSum = (curr == 0) ? 0 : preSum[curr - 1];
        int rightSum = (curr == n-1) ? 0 : preSum[n - 1] - preSum[curr];

        if(leftSum == rightSum) return curr;
    }

    return -1;
}

int main(){

    vector<int> nums = {2, 3, -1, 8, 4};

    int equilibriumInd = getEquilibriumIndex(nums);

    if(equilibriumInd == -1) 
        cout<<"There is no such index"<<endl;
    else 
        cout<<"Equilibrium Index = "<<equilibriumInd;

    return 0;
}