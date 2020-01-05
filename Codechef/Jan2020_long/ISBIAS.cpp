#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int q;
	cin>>q;
	vector<int> seq(n+1);
	for(int i=1; i<=n; i++){
		cin>>seq[i];
	}
	vector<int> maxseq(n+1,0);
	vector<int> minseq(n+1,0);
	int curr_state = 0, prev_state = 0;
	int seql = 0, seqs = 0;
	for(int i=1; i<n; i++){
		prev_state = curr_state;
		if(seq[i]<seq[i+1]){
			curr_state = 1;
		}
		else{
			curr_state = 0;
		}
		if(curr_state == 1 && prev_state == 0){
			seql++;
		}
		maxseq[i+1] = seql;
	}
	curr_state = 1, prev_state = 1;
	for(int i=1; i<n; i++){
		prev_state = curr_state;
		if(seq[i]>seq[i+1]){
			curr_state = 0;
		}
		else{
			curr_state = 1;
		}
		if(curr_state == 0 && prev_state == 1){
			seqs++;
		}
		minseq[i+1] = seqs;
	}
	/*for(int i=0; i<=n; i++){
		cout<<maxseq[i]<<" "<<minseq[i]<<endl;
	}*/
	while(q--){
		int l,r;
		cin>>l>>r;
		int a,b;
		if(maxseq[l-1] == maxseq[l]){
			a = maxseq[r] - maxseq[l];
		}
		else{
			a = maxseq[r] - maxseq[l] + 1;
		}
		if(minseq[l-1] == minseq[l]){
			b = minseq[r] - minseq[l];
		}
		else{
			b = minseq[r] - minseq[l] + 1;
		}
		if(a==b){
			if(a == 0){
				cout<<"NO"<<endl;
			}
			else{
				cout<<"YES"<<endl;
			}
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}