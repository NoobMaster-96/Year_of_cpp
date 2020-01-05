#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		unsigned long long int A,B,C,D,E,S=0;
		cin>>A;
		S = 2*pow(10,n) + A;
		cout<<S<<endl<<flush;
		cin>>B;
		C = pow(10,n) - B;
		cout<<C<<endl<<flush;
		cin>>D;
		E = pow(10,n) - D;
		cout<<E<<endl<<flush;
		int check;
		cin>>check;
		if(check == -1){
			continue;
		}
	}
	return 0;
}