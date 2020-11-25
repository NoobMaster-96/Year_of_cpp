#include<bits/stdc++.h>
using namespace std;

string convert(vector<int>& a){
	int n = a.size();
	string ans = "";
	int i = 0;
	while(i<n){
		int l = a[i];
		int r = a[i];
		int j = 1;
		while(i+j<n && a[i+j]==l+j){
			r = a[i+j];
			j++;
		}
		if(ans.length()!=0){
			ans += ',';
		}
		if(l==r){
			ans += to_string(l);
		}
		else{
			ans += (to_string(l)+"-"+to_string(r));
		}
		i += j;
	}
	return ans;
}

int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<convert(a);
}