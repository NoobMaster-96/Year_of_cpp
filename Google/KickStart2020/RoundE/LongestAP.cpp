#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int

int main(){
	int T;
	cin>>T;
	for(int z=1;z<=T;z++){
		int n;
		cin>>n;
		vector<int> a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int ans = 2;
		int diff = a[1]-a[0];
		int currlen = 2;
		for(int i=2;i<n;i++){
			if(a[i]-a[i-1]==diff){
				currlen++;
			}
			else{
				diff = a[i]-a[i-1];
				ans = max(ans,currlen);
				currlen = 2;
			}
		}
		ans = max(ans,currlen);
		cout<<"Case #"<<z<<": "<<ans<<endl;
	}
}