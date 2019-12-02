#include<bits/stdc++.h>
using namespace std;

string calculateScore(string text, string prefix, string suffix){
	vector<string> ans;
	int lent = text.length(), lenp = prefix.length(), lens = suffix.length();
	int lim1,lim2;
	if(lent<lenp){
		lim1=lent;
	}
	else{
		lim1=lenp;
	}
	if(lent<lenp){
		lim2=lent;
	}
	else{
		lim2=lens;
	}
	for(int i=1;i<lim1;i++){
		
	}
}
int main(){
	string text,prefix,suffix;
	cin>>text>>prefix>>suffix;
}