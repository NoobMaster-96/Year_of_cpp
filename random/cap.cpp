#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define lli long long int

int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i+=1){
		cin>>a[i];
	}
	lli dp[n][n];
	for(int i=0;i<n;i++){
		dp[0][i] = (lli)a[n-1]*(lli)a[i];
		dp[i][0] = (lli)a[0]*(lli)a[n-i-1];
	}
	for(int i=1;i<n;i+=1){
		for(int j=1;j<n;j+=1){
			dp[i][j] = dp[i-1][j-1]+(lli)a[j]*(lli)a[n-1-i];
		}
	}
	/*for(int i=0;i<n;i+=1){
		for(int j=0;j<n;j+=1){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}*/
	lli ans = LLONG_MIN;
	for(int i=0;i<n;i+=1){
		for(int j=0;j<n-1-i;j+=1){
			ans = max(ans,dp[i][j]);
		}
	}
	cout<<ans<<endl;
}