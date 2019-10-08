#include<bits/stdc++.h>
using namespace std;

void ArrayMod(vector<long long int> A, long long int N, long long int K){
	if(N<K){
		for(int i=0; i<N; i++){
			if((K/N)%3== 2)
				A[i]=A[i]^A[N-1-i];
			else if((K/N)%3== 1)
				A[i]=A[i]^A[N-1-i];
			else
				A[i]=A[i];

		}
		for(int i=0; i<N; i++){
			if((K/N)%3== 2)
				A[i]=A[i]^A[N-1-i];
		}
		for(int i=0; i<K%N; i++){
			A[i]=A[i]^A[N-1-i];
		}
		if(N%2!=0)
			A[N/2]=0;
	}
	else{
		for(int i=0; i<K; i++){
			A[i]=A[i]^A[N-1-i];
		}
	}

	for(int i=0; i<N; i++){
		cout<<A[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int T;
	cin>>T;
	for(int i=0; i<T; i++){
		long long int N,K;
		cin>>N>>K;
		vector<long long int> A(N,0);
		for(int j=0; j<N; j++){
			cin>>A[j];
		}
		ArrayMod(A,N,K);
	}
}