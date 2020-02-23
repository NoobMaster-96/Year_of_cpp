#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n,k,ans=0;
		cin>>n>>k;
		for(int i=0;i<n;i++){
			long long int temp;
			cin>>temp;
			ans += temp%k;
		}
		ans = ans%k;
		cout<<ans<<endl;
	}
}