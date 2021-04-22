#include<bits/stdc++.h>
using namespace std;
#define endl "\n" 

int digitsum(int x){
	int ans = 0;
	while(x){
		ans += (x%10);
		x /= 10;
	}
	return ans;
}

int solution(vector<int>& a){
	int n = a.size();
	sort(a.begin(),a.end());
	map<int,vector<int>> mp;
	for(int i=0;i<n;i+=1){
		int ds = digitsum(a[i]);
		mp[ds].push_back(a[i]);
	}
	int ans = -1;
	for(auto x:mp){
		int sz = x.second.size();
		if(sz>1){
			ans = max(ans,x.second[sz-1]+x.second[sz-2]);
		}
	}
	return ans;
}

int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i+=1){
		cin>>a[i];
	}
	cout<<solution(a)<<endl;
}