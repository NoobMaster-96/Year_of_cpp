#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define endl "\n"
const int a = 100007;
lli mat[a][4];

int main(){
	lli t;
	cin>>t;
	while(t--){
		lli n;
		cin>>n;
		vector<lli> a(n);
		memset(mat,0,sizeof(mat));
		for(lli i=0;i<n;i++){
			cin>>a[i];
			a[i] = (a[i]%4);
			if(a[i]<0){
				a[i]+=4;
			}
		}
		vector<lli> squarediff(n);
		squarediff[0] = a[0];
		for(int i=1;i<n;i++){
			squarediff[i] = pow(a[i],2)-pow(a[i-1],2);
		}
		mat[0][a[0]] = 1;
		lli ans = 0;
		if(a[0]!=2){
			ans++;
		}
		for(lli i=1;i<n;i++){
			for(lli j=0;j<4;j++){
				mat[i][(j*a[i])%4] += mat[i-1][j];
			}
			mat[i][a[i]]++;
			for(lli j=0;j<4;j++){
				if(j!=2){
					ans+=mat[i][j];
				}
			}
		}
		cout<<ans<<endl;
	}
}