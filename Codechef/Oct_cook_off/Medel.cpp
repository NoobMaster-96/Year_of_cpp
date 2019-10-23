#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
		int n;
		cin>>n;
		vector<int> seq(n,0);
		for(int j=0;j<n;j++){
			cin>>seq[j];
		}
		vector<int> s = seq;
		sort(s.begin(),s.end());
		int a=s[0],b=s[n-1];
		int idxa,idxb;
		for(int j=0;j<n;j++){
			if(seq[j]==a)
				idxa=j;
			if(seq[j]==b)
				idxb=j;
		}
		if(idxa>idxb){
			cout<<b<<" "<<a<<"\n";
		}
		if(idxb>idxa){
			cout<<a<<" "<<b<<"\n";
		}
	}
	return 0;
}