#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int x,k;
		cin>>x>>k;
		int n = 0;
		while(x%2==0){
			n++;
			x = x/2;
		}
		for(int i=3;i<=sqrt(x);i+=2){
			while(x%i==0){
				n++;
				x = x/i;
			}
		}
		if(x>2){
			n++;
		}
		if(n<k){
			cout<<0<<endl;
		}
		else{
			cout<<1<<endl;
		}
	}
	return 0; 
}