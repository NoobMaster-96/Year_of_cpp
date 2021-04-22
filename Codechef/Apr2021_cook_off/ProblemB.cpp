#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long 

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,q;
		cin>>n>>q;
		vector<ll> a(n);
		for(int i=0;i<n;i+=1){
			cin>>a[i];
		}
		vector<ll> bit(32,0);
		for(int i=0;i<n;i+=1){
			for(int j=0;j<32;j+=1){
				bit[j] += ((a[i]>>j)&1);
			}
		}
		ll ans = 0;
		for(int i=0;i<32;i+=1){
			if(bit[i]>0){
				ans = (ans|(1<<i));
			}
		}
		cout<<ans<<endl;
		int x;
		ll v;
		for(int i=0;i<q;i+=1){
			cin>>x>>v;
			for(int j=0;j<32;j+=1){
				bit[j] -= ((a[x-1]>>j)&1);
			}
			a[x-1] = v;
			for(int j=0;j<32;j+=1){
				bit[j] += ((a[x-1]>>j)&1);
			}
			ans = 0;
			for(int i=0;i<32;i+=1){
				if(bit[i]>0){
					ans = (ans|(1<<i));
				}
			}
			cout<<ans<<endl;
		}
	}
}
