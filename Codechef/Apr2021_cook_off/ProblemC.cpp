#include<bits/stdc++.h>
using namespace std;
#define endl "\n" 

string solution(string& s){
	int len = s.length();
	vector<bool> l(26,false), u(26,false);
	string ans = "";
	for(int i=0;i<len;i+=1){
		if(s[i]>='a' && s[i]<='z'){
			l[s[i]-'a'] = true;
		}
		else{
			u[s[i]-'A'] = true;
		}
	}
	for(int i=25;i>=0;i-=1){
		if(l[i] && u[i]){
			ans = ('A'+i);
			break;
		}
	}
	if(ans==""){
		ans = "NO";
	}
	return ans;
}

int main(){
	int n;
	cin>>n;
	string s;
	for(int i=0;i<n;i+=1){
		cin>>s;
		cout<<solution(s)<<endl;
	}
}