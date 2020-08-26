#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int

int main(){
	int T;
	cin>>T;
	for(int z=1;z<=T;z++){
		cout<<"Case #"<<z<<": ";
		int n,a,b,c;
		cin>>n>>a>>b>>c;
		vector<int> ans(n,0);
		if(n==1){
			cout<<1<<endl;
			continue;
		}
		if(a+b-c>n || a+b-c<2){
			cout<<"IMPOSSIBLE"<<endl;
			continue;
		}
		if(b==c){
			for(int i=n-1;i>(n-1)-b;i--){
				ans[i] = n;
			}
			b -= c;
			a -= c;
		}
		else{
			for(int i=(a-c);i<a;i++){
				ans[i] = n;
			}
			a -= c;
			b -= c;
		}
		for(int i=0;i<a;i++){
			ans[i] = n-1;
		}
		for(int i=n-1;i>(n-1)-b;i--){
			ans[i] = n-1;
		}
		for(int i=0;i<n;i++){
			if(ans[i]==0){
				ans[i] = 1;
			}
		}
		for(int i=0;i<n;i++){
			cout<<ans[i]<<" ";
		}
		cout<<endl;
	}
}