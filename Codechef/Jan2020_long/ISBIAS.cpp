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
	/*for(int i=1; i<=n; i++){
		cout<<maxseq[i]<<" "<<minseq[i]<<endl;
	}*/
	while(q--){
		int l,r; 
		cin>>l>>r;
		int a=0,b=0;
		if(l+1 == r){
			cout<<"NO"<<endl;
			continue;
		}
		else{
			a = maxseq[r] - maxseq[l];
			b = minseq[r] - minseq[l];
			if(maxseq[l] == maxseq[l+1] && seq[l] < seq[l+1]){
				a++;
			}
			if(minseq[l] == minseq[l+1] && seq[l] > seq[l+1]){
				b++;
			}
		}
		if(a==b){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}