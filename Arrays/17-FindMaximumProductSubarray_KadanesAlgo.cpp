#include<bits/stdc++.h>
using namespace std;

// 1. three loops & pair ? O(N^3) : O(1)
int allSubarrays(vector<int> arr){

    int n = arr.size();

    int maxProduct = INT_MIN;
    pair<int, int> pr;

    for(int i=0; i<n; i++){

        for(int j=i; j<n; j++){

            int currProduct = 1;
            for(int k=i; k<=j; k++){

                currProduct *= arr[k];
            }
            
            if(currProduct > maxProduct){

                maxProduct = currProduct;
                pr = make_pair(i, j);
            } 
        }
    }

    cout<<"{ ";
    for(int i=pr.first; i<=pr.second; i++)
        cout<<arr[i]<<" ";
    cout<<"}"<<endl;

    cout<<"Max. Subarray Product = ";

    return maxProduct;
}



// 2. Better Approach ? O(N^2) : O(1);
int maxSubArray(vector<int>& arr){

    int n = arr.size();
    
    int maxProduct = INT_MIN;
    pair<int, int> pr;

    for(int i=0; i<n; i++){

        int currProduct = 1;
        for(int j=i; j<n; j++){

            currProduct *= arr[j];

            if(currProduct > maxProduct){

                maxProduct = currProduct;
                pr = make_pair(i, j);
            }
        }
    }

    cout<<"{ ";
    for(int i=pr.first; i<=pr.second; i++)
        cout<<arr[i]<<" ";
    cout<<"}"<<endl;

    cout<<"Max. Subarray Product = ";

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

    return (maxProduct == 1) ? maxEle : maxProduct;
}

int main(){

    vector<int> arr = {2, 3, -5, 4};
    // Appr. 1
    cout<<allSubarrays(arr)<<endl;

    // Appr. 2
    cout<<maxSubArray(arr)<<endl;

    // Appr. 3
    cout<<"By Kadane's Algo. = "<<usingKadanesAlgo(arr);

    return 0;
}