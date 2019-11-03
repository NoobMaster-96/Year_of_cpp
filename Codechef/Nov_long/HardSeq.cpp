#include<bits/stdc++.h>
using namespace std;

vector<int> GenSeq(){
	vector<int> Seq;
	Seq.push_back(0);
	Seq.push_back(0);
	for(int i=2;i<128;i++){
		int flag=0;
		int x=Seq[i-1];
		int idx;
		for(int j=i-2;j>=0;j--){
			if(Seq[j]==x){
				flag=1;
				idx=j;
				break;
			}
		}
		if(flag==0){
			Seq.push_back(0);
		}
		else{
			Seq.push_back(i-1-idx);
		}
	}
	return Seq;
}
int main(){
	int T;
	cin>>T;
	vector<int > Seq = GenSeq();
	for(int i=0;i<T;i++){
		int N;
		cin>>N;
		int x=Seq[N-1];
		int ans=0;
		for(int j=0;j<N;j++){
			if(Seq[j]==x)
				ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}