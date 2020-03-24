#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin>>T;
	int num = 1;
	while(T--){
		int N,K;
		cin>>N>>K;
		vector<int> M(N);
		vector<int> diff;
		for(int i=0;i<N;i++){
			cin>>M[i];
		}
		for(int i=1;i<N;i++){
			diff.push_back(M[i]-M[i-1]);
		}
		sort(diff.begin(),diff.end());
		int temp = diff[N-2];
		if(temp % 2 == 0){
			diff[N-2] = temp/2;
			diff.push_back(temp/2);
		}
		else{
			diff[N-2] = temp/2;
			diff.push_back((temp/2) + 1);
		}
		sort(diff.begin(),diff.end());
		cout<<"Case #"<<num<<": "<<diff[N-1]<<endl;
		num++;
	}
}