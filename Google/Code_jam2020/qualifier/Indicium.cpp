#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	for(int z=1;z<=t;z++){
		int n,k;
		cin>>n>>k;
		int diag = k/n -1;
		vector<vector<int>> mat(n,vector<int>(n));
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				mat[i][j] = diag+1;
				diag = (diag+1)%n;
			}
			diag = diag - 1;
			if(diag<0){
				diag += n;
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<mat[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}