#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> A(n);
		int i = 0;
		bool found = false;
		for(int j = 0; j<n; j++){
			cin>>A[j];
			if(found == false && A[j] == 1){
				i = j;
				found = true;
			}
		}
		bool flag = true;
		for(int j = i+1; j<n; j++){
			if(A[j] == 1){
				if(j-i<6){
					flag = false;
					break;
				}
				else{
					i = j;
				}
			}
		}
		if(flag == false){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}
	}
	return 0;
}