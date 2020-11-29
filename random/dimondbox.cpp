#include<bits/stdc++.h>
using namespace std;

bool maxsum(vector<vector<int>>& a, int r, int previdx, int& sum){
	int i=0;
	bool flag = false;
	while(i<7){
		if(i!=previdx){

		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		vector<vector<int>> a(n,vector<int>(7,0));
		for(int i=0;i<m;i++){
			int b,c,v;
			cin>>b>>c>>v;
			a[b-1][c-1] = max(a[b-1][c-1],v);
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<7;j++){
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}