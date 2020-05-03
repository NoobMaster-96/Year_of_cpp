#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int

int main(){
	int t;
	cin>>t;
	for(int z=1;z<=t;z++){
		int x,y;
		string s;
		cin>>x>>y>>s;
		int dist = 0;
		int ans = 0;
		for(int i=0;i<s.length();i++){
			if(s[i] == 'S'){
				y--;
			}
			else if(s[i] == 'N'){
				y++;
			}
			else if(s[i] == 'W'){
				x--;
			}
			else if(s[i] == 'E'){
				x++;
			}
			dist++;
			if(dist >= abs(x)+abs(y)){
				ans = i+1;
				break;
			}
		}
		cout<<"Case #"<<z<<": ";
		if(ans){
			cout<<ans<<endl;
		}
		else{
			cout<<"IMPOSSIBLE"<<endl;
		}
	}
}