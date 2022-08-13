#include<bits/stdc++.h>
using namespace std;

// 1. Brute Force ? O(N^3) : O(1)
void printSubarrays(int i, int j, vector<int> arr, int& maxi){

    int n = arr.size();
    int sum = 0;
    for(int k=i; k<=j; k++){

        sum += arr[k];
        // cout<<arr[k]<<" ";
    }
    // cout<<endl<<"Sum = "<<sum<<endl<<endl;
    
    if(sum > maxi) maxi = sum;
}

void allSubarrays(vector<int> arr){

    int n = arr.size();

    int maxi = INT_MIN;

    for(int i=0; i<n; i++){

        for(int j=i; j<n; j++){

            // printSubarrays(i, j, arr, maxi);
            int sum = 0;
            for(int k=i; k<=j; k++){

                sum += arr[k];
                // cout<<arr[k]<<" ";
            }
            // cout<<endl<<"Sum = "<<sum<<endl<<endl;
    
            if(sum > maxi) maxi = sum;
        }
    }

    cout<<"Max. Subarray Sum = "<<maxi<<endl;
}


// 2. Better Approach ? O(N^2) : O(1);
int maxSubArray(vector<int>& arr, vector<int>& subArr){

    int n = arr.size();
    
    int maxSum = INT_MIN;

    for(int i=0; i<n; i++){

        int currSum = 0;
        for(int j=i; j<n; j++){

            currSum += arr[j];

            if(currSum > maxSum){

                subArr.clear();
                maxSum = currSum;
                subArr.push_back(i);
                subArr.push_back(j);
            }
        }
    }

    return maxSum;
}


// 3. Kadane's Algo ? O(N) : O(1)
int usingKadanesAlgo(vector<int>& arr){

    int n = arr.size();

    int maxSum = INT_MIN;
    int currSum = 0;
    int maxEle = INT_MIN;

    for(int i=0; i<n; i++){

        currSum = max(currSum + arr[i], 0);
        maxSum = max(maxSum, currSum);
        maxEle = max(maxEle, arr[i]);
    }

    if(maxSum == 0) maxSum = maxEle;

    return maxSum;
}

int main(){

    vector<int> arr = {5, 4, -6, 3, -4, 1};
    // Appr. 1
    allSubarrays(arr);

    // Appr. 2
    vector <int> subArray;
    cout<<maxSubArray(arr, subArray)<<" <-> ";
  
    for(int i=subArray[0]; i<=subArray[1]; i++) {
        cout<<arr[i]<<" ";
    }cout<<endl;

    // Appr. 3
    cout<<"By Kadane's Algo. = "<<usingKadanesAlgo(arr);

    return 0;
}