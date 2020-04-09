#include<bits/stdc++.h>
using namespace std;
long long int dp[100007][4];

int main(){
	long long int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		vector<long long int> a(n);
		memset(dp,0,sizeof(dp));
		for(long long int i=0;i<n;i++){
			cin>>a[i];
			a[i] = (a[i]%4+4)%4;
		}
		dp[0][a[0]] = 1;
		long long int ans = 0;
		if(a[0]!=2){
			ans++;
		}
		for(long long int i=1;i<n;i++){
			for(long long int j=0;j<4;j++){
				dp[i][(j*a[i])%4] += dp[i-1][j];
			}
			dp[i][a[i]]++;
			for(long long int j=0;j<4;j++){
				if(j!=2){
					ans+=dp[i][j];
				}
			}
		}
		cout<<ans<<endl;
	}
}