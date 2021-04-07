#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define li long int

li solve(li n){

	li ans = 0;
	if(n>=4){
		ans += 44*(n/4);
	}
	if(n%4==0){
		ans += 16;
	}
	else if(n%4==1){
		ans += 20;
		if(n>4){
			ans += 12;
		}
	}
	else if(n%4==2){
		ans += 36;
		if(n>4){
			ans += 8;
		}
	}
	else{
		ans += 51;
		if(n>4){
			ans += 4;
		}
	}
	return ans;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		li n;
		cin>>n;
		cout<<solve(n)<<endl;
	}
}