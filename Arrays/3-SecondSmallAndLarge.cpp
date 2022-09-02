// // 1. by sorting ? O(N log N) : O(1)
// #include<bits/stdc++.h>
// using namespace std;

// void secondSmallAndLarge(int nums[], int n){

//     if(n < 2) return;

//     sort(nums, nums + n);

//     for(int i=0; i<n; i++) cout<<nums[i]<<" ";
//     cout<<endl;

//     int secondSmall = nums[1];
//     int secondLarge = nums[n-2];

//     cout<<"Second Smallest = "<<secondSmall<<endl;
//     cout<<"Second Largest = "<<secondLarge<<endl;
// }

// int main(){

//     int n = 8;
//     int nums[8] = {65,23,7,43,123,657,45,12};

//     for(auto ele: nums) cout<<ele<<" ";
//     cout<<endl;

//     secondSmallAndLarge(nums, n);

//     return 0;
// }


// // 2. Better Soln ? O(N) + O(N) -> O(N) : O(1) 
// #include<bits/stdc++.h>
// using namespace std;

// void secondSmallAndLarge(int nums[], int n){

//     if(n < 2) return;

//     int small = INT_MAX, secondSmall = INT_MAX;
//     int large = INT_MIN, secondLarge = INT_MIN;

//     for(int i=0; i<n; ++i){

//         if(nums[i] < small) small = nums[i];
//         if(nums[i] > large) large = nums[i];
//     }

//     for(int i=0; i<n; ++i){

//         if(nums[i] < secondSmall && nums[i] != small)
//             secondSmall = nums[i];
//         if(nums[i] > secondLarge && nums[i] != large)
//             secondLarge = nums[i];
//     }

//     cout << "Second Smallest = " << secondSmall << endl;
//     cout << "Second Largest = " << secondLarge << endl;
// }

// int main(){

//     int n = 8;
//     int nums[8] = {65,23,7,43,123,657,45,12};

//     for(auto a: nums) cout<<a<<" ";
//     cout<<endl;

//     secondSmallAndLarge(nums, n);

//     return 0;
// }


// 3. Best Soln ? O(N) : O(1) 
#include<bits/stdc++.h>
using namespace std;

void secondSmallAndLarge(int nums[], int n){

    if(n < 2) return;

    int small = INT_MAX, secondSmall = INT_MAX;
    int large = INT_MIN, secondLarge = INT_MIN;

    for(int i=0; i<n; ++i){

        if(nums[i] < small){
            secondSmall = small;
            small = nums[i];
        }
        else if(nums[i] < secondSmall 
             && nums[i] != small){
            secondSmall = nums[i];
        }


        if(nums[i] > large){
            secondLarge = large;
            large = nums[i];
        }
        else if(nums[i] > secondLarge 
             && nums[i] != large){
            secondLarge = nums[i];
        }

    }

    cout << "Second Smallest = " << secondSmall << endl;
    cout << "Second Largest = " << secondLarge << endl;
}
// only in one pass -> O(N)
int main(){

    int n = 8;
    int nums[8] = {65,23,7,43,123,657,45,12};

    for(auto a: nums) cout<<a<<" ";
    cout<<endl;

    secondSmallAndLarge(nums, n);

    return 0;
}