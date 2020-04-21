#include<bits/stdc++.h>
using namespace std;
#define endl "\n";

int main(){
	int t;
	cin>>t;
	for(int z=1;z<=t;z++){
		int n;
		cin>>n;
		vector<int> h(n);
		for(int i=0;i<n;i++){
			cin>>h[i];
		}
		int ans = 0;
		for(int i=1;i<n-1;i++){
			if(h[i]>h[i-1] && h[i]>h[i+1]){
				ans++;
			}
		}
		cout<<"Case #"<<z<<": "<<ans<<endl;
	}
}