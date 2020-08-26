#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int solution(string &s){
	int freqcounter[26];
	memset(freqcounter,0,sizeof(freqcounter));
	int ans = 0;
	int len = s.size();
	int i=0;
	while(i<len){
		freqcounter[s[i]-'a']++;
		i+=1;
	}
	priority_queue<int> pq;
	i=0;
	while(i<26){
		if(freqcounter[i]){
			pq.push(freqcounter[i]);
		}
		i+=1;
	}
	while(!pq.empty()){
		int tp = pq.top();
		pq.pop();
		if(pq.empty()){
			return ans;
		}
		if(tp == pq.top()){
			if(tp-1>0){
				pq.push(tp-1);
			}
			ans+=1;
		}
	}
	return ans;
}

int main(){
	string s;
	cin>>s;
	cout<<solution(s)<<endl;
}