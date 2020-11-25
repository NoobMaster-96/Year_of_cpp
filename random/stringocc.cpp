#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(string s){
	unordered_map<char,int> char_freq;
	int len = s.length();
	for(int i=0;i<len;i+=1){
		char_freq[s[i]] += 1;
	}
	for(int i=0;i<len;i+=1){
		if(char_freq.find(s[i])!=char_freq.end()){
			cout<<s[i]<<char_freq[s[i]];
			char_freq.erase(s[i]);
		}
	}
	cout<<endl;
}

int main(){
	int n;
	cin>>n;
	while(n--){
		string s;
		cin>>s;
		solve(s);
	}
}