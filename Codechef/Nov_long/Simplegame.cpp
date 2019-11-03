#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
		int N;
		cin>>N;
		int ans=0;
		for(int j=0;j<N;j++){
			int C;
			cin>>C;
			vector<int> A(C,0);
			int len;
			if(C%2==0)
				len=C/2;
			else
				len=(C+1)/2;
			for(int k=0;k<C;k++){
				cin>>A[k];
				if(k<len)
					ans += A[k];
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}