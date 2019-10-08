#include<bits/stdc++.h>
using namespace std;

vector< vector< int>> update_mat(vector< vector< int>> mat, pair<int,int> point, int N, int M){
	for(int i=0,j=0; i<M,j<N; i++,j++){
		mat[point.first -1][i] += 1;
		mat[j][point.second -1] += 1;
	}
	return mat;
}
int main(){
	int T;
	cin>>T;
	for(int i=0; i<T; i++){
		int N,M,Q,ans=0;
		cin>>N>>M>>Q;
		vector< vector< int>> mat(N);
		for(int j=0; j<N; j++){
			mat[j] = vector<int>(M,0);
		}
		pair<int,int> point;
		for(int j=0; j<Q; j++){
			cin>>point.first;
			cin>>point.second;

			mat = update_mat(mat, point, N, M);
		}

		for(int i=0; i<N; i++){
			for(int j=0; j<M; j++){
				cout<<mat[i][j]<<" ";
				if(mat[i][j]%2 != 0)
					ans++;
			}
		}
		cout<<ans<<endl;
	}

	return 0;
}