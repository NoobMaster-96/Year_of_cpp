#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

long long min_cost(int N, string S){
	vector<int> freq(26,0);
	for(int i=0;i<N;i+=1){
		freq[S[i]-'a']+=1;
	}
	int odd_freq = 0;
	for(int i=0;i<26;i+=1){
		if(freq[i]&1){
			odd_freq+=1;
		}
	}
	if((N&1 && odd_freq!=1)||(!(N&1) && odd_freq>0)){
		return -1;
	}
	
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		string s;
		cin>>n>>s;
		cout<<min_cost(n,s)<<endl;
	}
}