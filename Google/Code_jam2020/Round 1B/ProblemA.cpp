#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int

int main(){
	int t;
	cin>>t;
	map<pair<int,int>,string> m1;
	m1[make_pair(0,1)] = "N";
	m1[make_pair(0,3)] = "NN";
	m1[make_pair(1,0)] = "E";
	m1[make_pair(1,2)] = "EN";
	m1[make_pair(1,4)] = "WEN";
	m1[make_pair(2,1)] = "NE";
	m1[make_pair(2,3)] = "SEN";
	m1[make_pair(3,0)] = "EE";
	m1[make_pair(3,2)] = "WNE";
	m1[make_pair(3,4)] = "EEN";
	m1[make_pair(4,1)] = "SNE";
	m1[make_pair(4,3)] = "NNE";
	for(int z=1;z<=t;z++){
		int x,y;
		cin>>x>>y;
		string ans = "";
		bool flag = false;
		if(m1.find(make_pair(abs(x),abs(y))) != m1.end()){
			flag = true;
			ans = m1[make_pair(abs(x),abs(y))];
			if(x<0){
				for(int i=0;i<ans.length();i++){
					if(ans[i] == 'E'){
						ans[i] = 'W';
					}
					else if(ans[i] == 'W'){
						ans[i] = 'E';
					}
				}
			}
			if(y<0){
				for(int i=0;i<ans.length();i++){
					if(ans[i] == 'N'){
						ans[i] = 'S';
					}
					else if(ans[i] == 'S'){
						ans[i] = 'N';
					}
				}
			}
		}
		if(flag){
			cout<<"Case #"<<z<<": "<<ans<<endl;
		}
		else{
			cout<<"Case #"<<z<<": "<<"IMPOSSIBLE"<<endl;
		}
	}
}