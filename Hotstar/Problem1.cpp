#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

vector<int> order(int n, vector<int> f, vector<int> t, int s){
	int r = f.size();
}

int main(){
	int n,r;
	cin>>n>>r;
	vector<int> f(r),t(r);
	for(int i=0;i<r;i+=1){
		cin>>f[i];
	}
	for(int i=0;i<r;i+=1){
		cin>>t[i];
	}
	int s;
	cin>>s;
	vector<int> ans = order(n,f,t,s);
	for(int x:ans){
		cout<<x<<" ";
	}
}