#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> s(n);
		int sum = 0;
		int tmp = ceil(n/2.0);
		for(int i=0;i<n;i+=1){
			cin>>s[i];
			sum += s[i];
		}
		bool state = false;
		if(sum>=tmp){
			state = true;
		}
		int q;
		cin>>q;
		int ans = 0;
		for(int i=0;i<q;i+=1){
			int qi;
			cin>>qi;
			if(s[qi-1]==1){
				s[qi-1] = 0;
				sum -= 1;
			}
			else{
				s[qi-1] = 1;
				sum += 1;
			}
			bool currstate = false;
			if(sum>=tmp){
				currstate = true;
			}
			if(currstate!=state){
				ans += 1;
			}
			state = currstate;
		}
		cout<<ans<<"\n";
 	}
}