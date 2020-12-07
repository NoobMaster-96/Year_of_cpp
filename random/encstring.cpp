#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	string s;
	cin>>n>>s>>k;
	k = k%26;
	for(int i=0;i<n;i++){
		if(s[i]>='A' && s[i]<='Z'){
			s[i] = ('A'+ (k +(s[i]-'A'))%26);
		}
		else if(s[i]>='a' && s[i]<='z'){
			s[i] = ('a'+ (k +(s[i]-'a'))%26);
		}
	}
	cout<<s;
}