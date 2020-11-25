#include<bits/stdc++.h>
using namespace std;

void generatestrings(string s,int n){
	if(s.length()==n){
		cout<<s<<endl;
	}
	else{
		generatestrings(s+"0",n);
		generatestrings(s+"1",n);
	}
}
int main(){
	int n;
	cin>>n;
	generatestrings("",n);
}