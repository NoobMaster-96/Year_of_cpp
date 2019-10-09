#include<bits/stdc++.h>
using namespace std;



int main(){
	int T;
	cin>>T;
	for(int i=0; i<T; i++){
		long long int N,M,Q,x,y,countr=0,countc=0,ans;
		cin>>N>>M>>Q;
		vector<long long int> R(N,0), C(M,0);

		for(int j=0; j<Q; j++){
			cin>>x>>y;
			x--;
			y--;
			R[x]++;
			C[y]++;
		}

		for(int i=0; i<N; i++){
			if(R[i]%2==1)
				countr++;
		}

		for(int i=0; i<M; i++){
			if(C[i]%2==1)
				countc++;
		}

		ans = countr*M + countc*N -2*countr*countc;
		cout<<ans<<endl;
	}

	return 0;
}