#include<bits/stdc++.h>
using namespace std;
int solve(vector<vector<int>> A, vector<int> idx, int M, int N){
	int ans = 1000000005;
	while(1){
		int maxval = -1000000005;
		int minval = 1000000005;
		int maxidx = -1;
		for(int i=0;i<M;i++){
			if(maxval<A[i][idx[i]]){
				maxval = max(maxval,A[i][idx[i]]);
				maxidx = i;
			}
			minval = min(minval,A[i][idx[i]]);
		}
		ans = min(ans,maxval-minval);
		idx[maxidx]--;
		if(idx[maxidx]<0){
			break;
		}
	}
	return ans;
}
int main(){
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
		int M,N;
		cin>>N>>M;
		vector<vector<int>> A(M);
		for(int j=1;j<=N;j++){
			int temp;
			cin>>temp;
			int idx = j%M;
			A[idx].push_back(temp);
		}
		vector<int> idx(M,0);
		for(int j=0;j<M;j++){
			sort(A[j].begin(),A[j].end());
			idx[j] = A[j].size()-1;
		}
		cout<<solve(A,idx,M,N)<<endl;
	}
	return 0;
}