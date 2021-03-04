#include<bits/stdc++.h>
using namespace std;

long highestProfit(int num, vector<long> a, long o){
	map<long,long> freq;
	long currmax = 0;
	for(int i=0;i<a.size();i+=1){
		freq[a[i]] += 1;
		currmax = max(currmax,a[i]);
	}
	long ans = 0;
	while(o>0){
		if(freq[currmax]>=o){
			ans += currmax*o;
			o = 0;
		}
		else{
			ans += currmax * freq[currmax];
			o -= freq[currmax];
			freq[currmax-1] += freq[currmax];
			freq[currmax] = 0;
			currmax -= 1;
		}
	}
	return ans;
}

int main(){
	int n;
	cin>>n;
	vector<long> a(n);
	for(int i=0;i<n;i+=1){
		cin>>a[i];
	}
	int o;
	cin>>o;
	cout<<highestProfit(n,a,o);
}