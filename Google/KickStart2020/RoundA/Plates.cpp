#include<bits/stdc++.h>
using namespace std;
int N,K,P;
int dp[1505][1505];

int solution(int idx,int rem,vector<vector<int>> &a){
    if(idx==N){
    	return 0;
    }
    if(rem==0){
    	return 0;
    }
    if(dp[idx][rem]!=-1){
    	return dp[idx][rem];
    }
    int ans = solution(idx+1,rem,a);
    int sum = 0;
    for(int i=1;i<K+1;i++){
        sum += a[idx][i-1];
        if(i<=rem){
            ans = max(ans,solution(idx+1,rem-i,a)+sum);
        }
        else{
            break;
        }
    }
    return dp[idx][rem] = ans;
}


int main(){
	int T;
	cin>>T;
	int num =1;
	while(T--){
		cin>>N>>K>>P;
		vector<vector<int>> A(N);
		for(int i=0;i<N;i++){
			for(int j=0;j<K;j++){
				int temp;
				cin>>temp;
				A[i].push_back(temp);
			}
		}
		memset(dp,-1,sizeof(dp));
		cout<<"Case #"<<num<<": "<<solution(0,P,A)<<endl;
		num++;
	}
}