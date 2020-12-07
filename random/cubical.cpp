#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> s(n);
		for(int i=0;i<n;i++){
			cin>>s[i];
		}
		int k;
		cin>>k;
		sort(s.begin(),s.end());
		int ans = 0;
		for(int i=0;i<k;i++){
			ans += s[i];
		}
		ans += (n-k)*s[k-1];
		cout<<ans<<"\n";
	}
}