#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		string s;
		cin>>s;
		int len = s.length();
		string ans = "";
		stack<char> st;
		for(int j=0;j<len;j++){
			int a = s[j]-'0';
			int l = st.size();
			if(l<=a){
				for(int k=0;k<a-l;k++){
					ans += '(';
					st.push('(');
				}
				ans += '0' + a;
			}
			else{
				for(int k=0;k<l-a;k++){
					ans += ')';
					st.pop();
				}
				ans += '0' + a;
			}
		}
		int l = st.size();
		for(int j=0;j<l;j++){
			ans += ')';
			st.pop();
		}
		cout<<"Case #"<<i<<": "<<ans<<endl;
	}
}