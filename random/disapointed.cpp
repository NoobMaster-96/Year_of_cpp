#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a(n);
		for(int i=0;i<n;i+=1){
			cin>>a[i];
		}
		sort(a.begin(),a.end());
		int ans = 0;
		int sum = 0;
		for(int i=0;i<n;i+=1){
			if(a[i]>=sum){
				sum += a[i];
				ans += 1;
			}
		}
		cout<<ans<<endl;
	}
}