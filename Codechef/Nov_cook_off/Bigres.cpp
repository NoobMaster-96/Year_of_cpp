#include<bits/stdc++.h>
using namespace std;

int main(){
  	int t;
  	cin>>t;
  	while(t--){
  		long long int n;
  		cin>>n;
  		vector<long long int> a(n);
  		vector<long long int> h(n);
  		for(int i=0;i<n;i++){
  			cin>>a[i]>>h[i];
  		}
  		vector<long long int> diff;
  		for(int i=0;i<n-1;i++){
  			diff.push_back(a[i+1]-a[i]);
  		}
  		vector<long long int> c;
  		c.push_back(diff[0]);
  		for(int i=0;i<diff.size()-1;i++){
  			c.push_back(diff[i]+diff[i+1]);
  		}
  		c.push_back(diff[diff.size()-1]);
  		sort(c.begin(),c.end());
  		sort(h.begin(),h.end());
  		long long int ans = 0;
  		for(int i=0;i<n;i++){
  			ans += c[i]*h[i];
  		}
  		cout<<ans<<endl;

  	}
}