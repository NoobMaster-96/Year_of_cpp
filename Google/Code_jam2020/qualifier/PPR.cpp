#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	for(int z=1;z<=t;z++){
		int n;
		cin>>n;
		vector<pair<pair<int,int>,int>> time(n);
		for(int i=0;i<n;i++){
			int si,ei;
			cin>>si>>ei;
			time[i] = make_pair(make_pair(si,ei),i);
		}
		sort(time.begin(),time.end());
		string ans = "";
		for(int i=0;i<n;i++){
			ans += '0';
		}
		stack<int> C,J;
		C.push(0);
		J.push(0);
		bool possible = true;
		for(int i=0;i<n;i++){
			if(C.top()<=time[i].first.first){
				C.push(time[i].first.second);
				ans[time[i].second] = 'C';
			}
			else if(J.top()<=time[i].first.first){
				J.push(time[i].first.second);
				ans[time[i].second] = 'J';
			}
			else{
				possible = false;
				break;
			}
		}
		cout<<"Case #"<<z<<": ";
		if(possible == true){
			cout<<ans<<endl;
		}
		else{
			cout<<"IMPOSSIBLE"<<endl;
		}
	}
}