#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

int solution(vector<vector<int>>& grid, int n, int m, int k){
	int ans = 0;
	vector<vector<ll>> v(n+1,vector<ll>(m+1,0)), h(n+1,vector<ll>(m+1,0));
	for(int i=1;i<=n;i+=1){
		for(int j=1;j<=m;j+=1){
			h[i][j] = h[i][j-1]+(ll)grid[i][j];
			v[i][j] = v[i-1][j]+(ll)grid[i][j];
		}
	}
	for(int i=1;i<=n;i+=1){
		for(int j=1;j<=m;j+=1){
			//cout<<i<<" "<<j<<endl;
			ll sum = 0;
			for(int l=1;l<=(min(n-i+1,m-j+1));l+=1){
				sum += ((v[i+l-1][j+l-1]-v[i-1][j+l-1])+(h[i+l-1][j+l-1]-h[i+l-1][j-1]))-(ll)grid[i+l-1][j+l-1];
				//cout<<sum<<endl;
				if(sum/(ll)(l*l)>=(ll)k){
					ans += (min(n-i+1,m-j+1)-l+1);
					break;
				}
			}
		}
	}
	/*for(int i=0;i<=n;i+=1){
		for(int j=0;j<=m;j+=1){
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
	for(int i=0;i<=n;i+=1){
		for(int j=0;j<=m;j+=1){
			cout<<h[i][j]<<" ";
		}
		cout<<endl;
	}*/
	return ans;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		vector<vector<int>> grid(n+1,vector<int>(m+1));
		for(int i=1;i<=n;i+=1){
			for(int j=1;j<=m;j+=1){
				cin>>grid[i][j];
			}
		}
		cout<<solution(grid,n,m,k)<<endl;
	}
}