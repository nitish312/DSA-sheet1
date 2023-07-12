#include<bits/stdc++.h>
using namespace std;

// 1. Recursive ? O(2^N) : O(N)
int fibo(int n)
{
	if(n == 0 || n == 1) return n;
	return fibo(n-1) + fibo(n-2);
}



// 2. Top-Down - Memoization ? O(N) : O(N) + O(N) -> O(N)
int fibo(int n, vector<int>& dp)
{
	if(n == 0 || n == 1) return n;
	if(dp[n] != -1) return dp[n];
	return dp[n] = fibo(n-1, dp) + fibo(n-2, dp);
} // vector<int>& dp(n+1, -1);



// 3. Bottom-Up - Tabulation ? O(N) : O(N)
int fibo(int n)
{
	vector<int> dp(n+1);
	dp[0] = 0;
	dp[1] = 1;
	for(int i=2; i<=n; i++)
	{
		dp[i] = dp[i-1] + dp[i-2];
	}
	return dp[n];
}



// 4. space opti - Iterative ? O(N) : O(1)
int fibo(int n)
{
	int prev2 = 0;
	int prev1 = 1;
	for(int i=2; i<=n; i++)
	{
		int next = prev1 + prev2;
		prev2 = prev1;
		prev1 = next;
	}
	return prev1
}

int main()
{
	int n = 10;

	for(int i=0; i<n; i++)
		cout<<fibo(i)<<" ";

	return 0;
}