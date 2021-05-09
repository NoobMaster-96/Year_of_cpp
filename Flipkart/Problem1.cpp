#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

vector<int> funcBouquet(vector<int> f, int r){
	int n = f.size();
	vector<int> ans = f;
	sort(ans.begin(),ans.begin()+r);
	sort(ans.begin()+r,ans.end(),greater<int>());
	return ans;
}

int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i+=1){
		cin>>a[i];
	}
	int r;
	cin>>r;
	vector<int> ans = funcBouquet(a,r);
	for(int x:ans){
		cout<<x<<" ";
	}
}