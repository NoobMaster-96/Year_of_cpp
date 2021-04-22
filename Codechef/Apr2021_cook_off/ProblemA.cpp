#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		vector<int> a(n);
		set<int> st;
		for(int i=0;i<n;i+=1){
			cin>>a[i];
			st.insert(a[i]);
		}
		int ty = st.size();
		int ans = min(ty,n-x);
		cout<<ans<<endl;
	}
}