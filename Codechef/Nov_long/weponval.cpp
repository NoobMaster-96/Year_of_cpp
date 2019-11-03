#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		vector<string> str(n);
		for(int j=0;j<n;j++){
			cin>>str[j];
		}
		string S = str[0];
		for(int j=1;j<n;j++){
			for(int k=0;k<10;k++){
				S[k]=((S[k]-48)^(str[j][k]-48)+48);
			}
		}
		int ans=0;
		for(int j=0;j<10;j++){
			if(S[j]=='1'){
				ans++;
			}
		}
		cout<<ans;
	}

	return 0;
}