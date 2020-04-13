#include<bits/stdc++.h>
using namespace std;
int a[501][5001];
#define inf 1e9

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		memset(a,0,sizeof(a));
		for(int i=0;i<n;i++){
			for(int j=0;j<k;j++){
				cin>>a[i][j];
			}
		}
		vector<int> frequency(k,0);
		vector<int> ans(n);
		for(int i=0;i<n;i++){
			map<int,int> m;
			int mini = inf;
			for(int j=0;j<k;j++){
				if(frequency[j]==mini){
					m[a[i][j]]++;
				}
			}
			int maxe = 0;
			int num = 1;
			for(auto x:m){
				if(x.second>maxe){
					maxe = x.second;
					num = x.first;
				}
			}
			ans[i] = num;
			for(int j=0;j<k;j++){
				if(a[i][j]==num){
					frequency[j]++;
				}
			}
		}
		for(int i=0;i<n;i++){
			cout<<ans[i]<<" ";
		}
		cout<<endl;
	}
}