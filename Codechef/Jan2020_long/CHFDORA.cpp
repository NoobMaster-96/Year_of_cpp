#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		vector<vector<int>> mat(n,vector<int>(m));
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>mat[i][j];
			}
		}
		long long int ans = n*m;
		int len = min(n,m);
		if(len % 2 == 0){
			len--;
		}
		for(int size = 3; size<= len; size += 2){
			for(int i = size/2; i < n-size/2; i++){
				for(int j = size/2; j < m-size/2; j++){
					bool flag = true;
					for(int k = 1; k<= size/2; k++){
						if(mat[i-k][j] != mat[i+k][j]){
							flag = false;
							break;
						}
					}
					if(flag == false){
						continue;
					}
					flag = true;
					for(int k = 1; k<= size/2; k++){
						if(mat[i][j-k] != mat[i][j+k]){
							flag = false;
							break;
						}
					}
					if(flag == true){
						ans++;
					}
				}
			}
		}
		cout<<ans<<endl;
	}
}