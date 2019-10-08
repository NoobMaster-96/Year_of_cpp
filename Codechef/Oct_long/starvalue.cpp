#include<bits/stdc++.h>
using namespace std;

void starval(vector<int> A, int N){
	int max=0;
	vector<int> f(N,1);
	for(int i=N-1; i>=0; i--){
		int count=0;
		if(f[i]!=0){
			for(int j=i-1; j>=0; j--){
				if(A[j]%A[i]==0){
					count++;
					f[j]=0;
				}
			}
		}
		if(count>max)
			max=count;
	}
	cout<<max<<endl;
}
int main(){
	int T;
	cin>>T;
	for(int i=0; i<T; i++){
		int N;
		cin>>N;
		vector <int> A(N,0);
		for(int j=0; j<N; j++){
			cin>>A[j];
		}
		starval(A,N);
	}
}