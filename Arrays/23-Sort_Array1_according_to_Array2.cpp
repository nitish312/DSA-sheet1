#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

// 1. brute - nested loop ? O(N*M) + sort -> O(N^2 * logN) : O(N+M)
vector<int> sortArr1ByArr2(vector<int> arr1, int N, vector<int> arr2, int M) 
{
    vector<int> ans;
    for(int i=0; i<M; i++)
    {
        int elem = arr2[i];
        for(int j=0; j<N; j++)
        {
            if(arr1[j] == elem)
            {
                ans.push_back(elem);
                arr1[j] = -1;
            }
        }
    }

    sort(arr1.begin(), arr1.end());
    for(auto i: arr1) 
        if(i != -1) 
            ans.push_back(i);

    return ans;
}



// 2. HashMap ? O(N*logN) + O(logM) + O(N) -> O(N*logN) : O(N+M)
vector<int> sortArr1ByArr2(vector<int> arr1, int N, vector<int> arr2, int M) 
{
    map<int,int> mp;
    for(int i=0; i<N; i++) // N*logN
    {
        mp[arr1[i]]++; // logN
    }
    
    vector<int> ans;
    
    for(int i=0; i<M; i++) // logM
    {
        if(mp.find(arr2[i]) != mp.end())
        {
            int count = mp[arr2[i]];
            while(count--)
            {
                ans.push_back(arr2[i]);
            }
            mp[arr2[i]] = 0;
        }
    }
    
    for(auto i: mp) // N
    {
        while(i.second > 0)
        {
            ans.push_back(i.first);
            i.second--;
        }
    }
    return ans;
} 

int main()
{
    vector<int> first = {2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8};
    int N = first.size();
    vector<int> second = {2, 1, 8, 3};
    int M = second.size();

    vector<int> ans = sortArr1ByArr2(first, N, second, M);
    for(auto i: ans) cout<<i<<" ";

    return 0;
}