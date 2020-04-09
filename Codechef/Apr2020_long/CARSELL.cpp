#include<bits/stdc++.h>
using namespace std;
long long int mod = 1000000007;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> A(n);
		for(int i=0;i<n;i++){
			cin>>A[i];
		}
		sort(A.begin(),A.end(),greater<int>());
		long long int ans = 0;
		for(int i=0;i<n;i++){
			ans += (long long int)max(A[i]-i,0);
		}
		cout<<ans%mod<<endl;
	}
	return 0;
}