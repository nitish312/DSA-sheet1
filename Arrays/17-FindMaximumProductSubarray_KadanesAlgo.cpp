#include<bits/stdc++.h>
using namespace std;

// 1. Brute Force ? O(N^3) : O(1)
void printSubarrays(int i, int j, vector<int> arr, int& maxProduct){

    int n = arr.size();
    int currProduct = 1;
    for(int k=i; k<=j; k++){

        currProduct *= arr[k];
        // cout<<arr[k]<<" ";
    }
    // cout<<endl<<"Product = "<<currProduct<<endl<<endl;
    
    if(currProduct > maxProduct) maxProduct = currProduct;
}

void allSubarrays(vector<int> arr){

    int n = arr.size();

    int maxProduct = INT_MIN;

    for(int i=0; i<n; i++){

        for(int j=i; j<n; j++){

            // printSubarrays(i, j, arr, maxProduct);
            int currProduct = 1;
            for(int k=i; k<=j; k++){

                currProduct *= arr[k];
                // cout<<arr[k]<<" ";
            }
            // cout<<endl<<"currProduct = "<<currProduct<<endl<<endl;
    
            if(currProduct > maxProduct) maxProduct = currProduct;
        }
    }

    cout<<"Max. Subarray Product = "<<maxProduct<<endl;
}


// 2. Better Approach ? O(N^2) : O(1);
int maxSubArray(vector<int>& arr, vector<int>& subArr){

    int n = arr.size();
    
    int maxProduct = 1;

    for(int i=0; i<n; i++){

        int currProduct = 1;
        for(int j=i; j<n; j++){

            currProduct *= arr[j];

            if(currProduct > maxProduct){

                subArr.clear();
                maxProduct = currProduct;
                subArr.push_back(i);
                subArr.push_back(j);
            }
        }
    }

    return maxProduct;
}


// 3. Kadane's Algo ? O(N) : O(1)
int usingKadanesAlgo(vector<int>& arr){

    int n = arr.size();

    int maxProduct = INT_MIN;
    int currProduct = 1;
    int maxEle = INT_MIN;

    for(int i=0; i<n; i++){

        currProduct = max(currProduct * arr[i], 1);
        maxProduct = max(maxProduct, currProduct);
        maxEle = max(maxEle, arr[i]);
    }

    if(maxProduct == 1) maxProduct = maxEle;

    return maxProduct;

    // return (maxProduct == 1) ? maxEle : maxProduct;
}

int main(){

    vector<int> arr = {2, 3, -5, 4};
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