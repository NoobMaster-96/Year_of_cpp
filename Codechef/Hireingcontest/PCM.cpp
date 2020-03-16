#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		set<char> st;
		for(int i=0;i<3;i++){
			st.insert(s[i]);
		}
		if(st.size() == 3){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}