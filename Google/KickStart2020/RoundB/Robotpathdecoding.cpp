#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int

int main(){
	int t;
	cin>>t;
	for(int z=1;z<=t;z++){
		string s;
		cin>>s;
		stack<bool> check;
		stack<lli> multiplier;
		stack<lli> y;
		stack<lli> x;
		check.push(true);
		multiplier.push(1);
		for(int i=0;i<s.length();i++){
			if(s[i]=='N'){
				check.push(false);
				y.push(-1);
				x.push(0);
			}
			else if(s[i]=='S'){
				check.push(false);
				y.push(1);
				x.push(0);
			}
			else if(s[i]=='E'){
				check.push(false);
				y.push(0);
				x.push(1);
			}
			else if(s[i]=='W'){
				check.push(false);
				y.push(0);
				x.push(-1);
			}
			else if(s[i]==')'){
				lli tempy = 0;
				lli tempx = 0;
				while(!check.top()){
					tempx += x.top();
					tempy += y.top();
					tempx += (lli)1000000000;
					tempx %= (lli)1000000000;
					tempy += (lli)1000000000;
					tempy %= (lli)1000000000;
					check.pop();
					x.pop();
					y.pop();
				}
				tempy *= multiplier.top();
				tempx *= multiplier.top();
				multiplier.pop();
				check.pop();
				y.push(tempy);
				x.push(tempx);
				check.push(false);
			}
			else if(s[i]!='('){
				check.push(true);
				multiplier.push(s[i]-'0');
			}
		}
		lli tempy = 0;
		lli tempx = 0;
		while(!check.top()){
			tempx += x.top();
			tempy += y.top();
			tempx += (lli)1000000000;
			tempx %= (lli)1000000000;
			tempy += (lli)1000000000;
			tempy %= (lli)1000000000;
			check.pop();
			x.pop();
			y.pop();
		}
		tempy *= multiplier.top();
		tempx *= multiplier.top();
		check.pop();
		multiplier.pop();
		tempx = (tempx + (lli)1000000000) % (lli)1000000000 + (lli)1;
		tempy = (tempy + (lli)1000000000) % (lli)1000000000 + (lli)1;
		cout<<"Case #"<<z<<": "<<tempx<<" "<<tempy<<endl;
	}
}