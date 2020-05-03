#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int

int main(){
	int t;
	cin>>t;
	for(int z=1;z<=t;z++){
		int n,d;
		cin>>n>>d;
		vector<lli> a(n);
		map<int,int> m;
		for(int i=0;i<n;i++){
			cin>>a[i];
			m[a[i]]++;
		}
		int ans = -1;
		for(auto i:m){
			if(i.second>=d){
				ans = 0;
				break;
			}
		}
		if(ans == -1 && d==2){
			ans = 1;
		}
		if(ans == -1){
			for(auto i:m){
				if(m.find(2*i.first)!=m.end()){
					ans = 1;
					break;
				}
			}
			if(ans == -1){
				for(auto i:m){
					if(i.second == 2){
						int idx = 0;
						sort(a.begin(),a.end());
						while(idx<n && a[idx]<=i.first){
							idx++;
						}
						if(idx!=n){
							ans = 1;
							break;
						}
					}
				}
				
			}
		}
		if(ans == -1){
			ans = 2;
		}
		cout<<"Case #"<<z<<": "<<ans<<endl;
	}
}