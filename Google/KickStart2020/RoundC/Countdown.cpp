#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int 

int main(){
	int t;
	cin>>t;
	for(int z=1;z<=t;z++){
		int n,k;
		cin>>n>>k;
		vector<int> a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int ans = 0;
		for(int i=0;i<n;i++){
			if(a[i] == k){
				bool flag = true;
				int idx=1;
				for(;i+idx<n;idx++){
					if(a[i+idx] != k-idx){
						flag = false;
						break;
					}
					if(a[i+idx] == 1){
						ans++;
					}
				}
				i = i+idx-1;
			}
		}
		cout<<"Case #"<<z<<": "<<ans<<endl;
	}
}