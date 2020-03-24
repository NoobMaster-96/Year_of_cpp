#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	int num = 1;
	while(t--){
		int N,B;
		cin>>N>>B;
		vector<int> A(N);
		for(int i=0;i<N;i++){
			cin>>A[i];
		}
		sort(A.begin(),A.end());
		int count = 0;
		for(int i=0;i<N;i++){
			if(B-A[i]>=0){
				count++;
				B -= A[i];
			}
		}
		cout<<"Case #"<<num << ": " <<count<<endl;
		num++;
	}
}