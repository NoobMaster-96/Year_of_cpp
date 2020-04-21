#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int

int main(){
	int t;
	cin>>t;
	for(int z=1;z<=t;z++){
		int w,h,w1,h1,w2,h2;
		cin>>w>>h>>w1>>h1>>w2>>h2;
		float dp[h][w];
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				dp[i][j] = -1;
			}
		}
		dp[0][0] = 1;
		for(int i=h1-1;i<h2;i++){
			for(int j=w1-1;j<w2;j++){
				dp[i][j] = 0;
			}
		}
		for(int i=1;i<h;i++){
			if(dp[i][0]!=0){
				dp[i][0] = dp[i-1][0]*0.5;
			}
		}
		for(int i=1;i<w;i++){
			if(dp[0][i]!=0){
				dp[0][i] = dp[0][i-1]*0.5;
			}
		}
		for(int i=1;i<h;i++){
			for(int j=1;j<w;j++){
				if(dp[i][j] != 0){
					float a,b;
					if(j==w-1){
						a = 1.0*dp[i-1][j];
					}
					else{
						a = 0.5*dp[i-1][j];
					}
					if(i==h-1){
						b = 1.0*dp[i][j-1];
					}
					else{
						b = 0.5*dp[i][j-1];
					}
					dp[i][j] = a+b;
				}
			}
		}
		cout<<"Case #"<<z<<": "<<dp[h-1][w-1]<<endl;
	}
}