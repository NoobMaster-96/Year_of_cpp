#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
		int M,N;
		cin>>N>>M;
		vector<int> A(N,0);
		for(int j=0;j<N;j++){
			cin>>A[j];
		}
		int diff = A[0]-A[1];
		if(diff<0)
			diff = diff*(-1);
		if(M==2){
			for(int j=0;j<N-1;j++){
				for(int k=j+1;k<N;k+=2){
					int temp=A[j]-A[k];
					if(temp<0)
						temp = temp*(-1);
					if(temp<diff)
						diff=temp;
				}
			}
		}
		else{
			for(int j=0;j<N-1;j++){
				for(int k=j+1;k<N;k++){
					int temp=A[j]-A[k];
					if(temp<0)
						temp = temp*(-1);
					if(temp<diff)
						diff=temp;
				}
			}
		}
		cout<<diff<<endl;
	}
	return 0;
}