#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int len;
		cin>>len;
		string str;
		cin>>str;
		int counta=0,countb=0;
		for(int j=0;j<len;j++){
			if(str[j]=='a'){
				counta++;
			}
			if(str[j]=='b'){
				countb++;
			}
		}
		string ans;
		if(countb>counta){
			
			for(int j=0;j<countb-counta;j++){
				ans += "b";
			}
			cout<<ans<<endl;
		}
		else if(countb<=counta){
			for(int j=0;j<counta-countb;j++){
				ans += "a";
			}
			if(ans.length()==0){
				cout<<"Empty"<<endl;
			}
			else{
				cout<<ans<<endl;
			}
		}
		
	}

	return 0;
}