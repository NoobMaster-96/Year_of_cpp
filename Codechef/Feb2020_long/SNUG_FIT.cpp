#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<long long int> A(n),B(n);
		for(int i=0;i<n;i++){
			cin>>A[i];
		}
		for(int i=0;i<n;i++){
			cin>>B[i];
		}
		sort(A.begin(),A.end());
		sort(B.begin(),B.end());
		long long int ans=0;
		for(int i=0;i<n;i++){
			ans += min(A[i],B[i]);
		}
		cout<<ans<<endl;
	}
}