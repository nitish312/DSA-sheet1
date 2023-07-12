// gfg ? O(n1) * O(n2) -> O(N^2) : O(N^2)
#include<iostream>
using namespace std;

int getCommonSubsequencesCount(string s1, string s2){

	int n1 = s1.size(), n2 = s2.size();

	int dp[n1+1][n2+1];

	for(int i=0; i<=n1; i++){

		for(int j=0; j<=n2; j++){

			dp[i][j] = 0;
		}
	}

	for(int i=1; i<=n1; i++){

		for(int j=1; j<=n2; j++){

			if(s1[i-1] == s2[j-1]){

				dp[i][j] = 1 + dp[i-1][j] + dp[i][j-1];
			}
			else{

				dp[i][j] = dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1];
			}
		}
	}

	return dp[n1][n2];
}

int main(){

	string s1 = "ajblqcpdz";
	string s2 = "aefcnbtdi";

	int ans = getCommonSubsequencesCount(s1, s2);

	cout<<"No. of Common Subsequences = "<<ans;

	return 0;
}