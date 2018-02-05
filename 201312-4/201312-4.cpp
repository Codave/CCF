#include<iostream>
using namespace std;
const long long mod=1000000007;
const int maxn=1010;
long long dp[maxn][6];
int main(){
	int n;
	cin>>n;
	memset(dp, 0, sizeof(dp));  
	for(int i=1;i<=n;i++){
		dp[i][0]=1;
		dp[i][1]=(dp[i-1][0]+dp[i-1][1]*2)%mod;
		dp[i][2]=(dp[i-1][0]+dp[i-1][2])%mod;
		dp[i][3]=(dp[i-1][1]+dp[i-1][3]*2)%mod;
		dp[i][4]=(dp[i-1][1]+dp[i-1][2]+dp[i-1][4]*2)%mod; 
		dp[i][5]=(dp[i-1][5]*2+dp[i-1][3]+dp[i-1][4])%mod;
	}
	cout<<dp[n][5]<<endl;
	return 0;
}
