#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t){
		long long int n;
		cin>>n;
		long long int A,B,C,D,E,S;
		long long int val = pow(10,n);
		cin>>A;
		S = 2*val + A;
		cout<<S<<endl;
		cin>>B;
		C = val - B;
		cout<<C<<endl;
		cin>>D;
		E = val - D;
		cout<<E<<endl;
		int check;
		cin>>check;
		if(check == -1){
			exit(0);
		}
		t--;
	}
	return 0;
}