#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int s,w1,w2,w3;
		cin>>s>>w1>>w2>>w3;
		int ans = 0;
		if(w1 + w2 + w3 <= s){
			ans = 1;
		}
		else if(w1 + w2 <= s){
			ans = 2;
		}
		else if(w2 + w3 <= s){
			ans =2;
		}
		else{
			ans = 3;
		}
		cout<<ans<<endl;
	}	
}