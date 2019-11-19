#include<bits/stdc++.h>
using namespace std;
vector<string> find_kernel(vector<string> sig,int N,int M){
	int li=N,ui=0,lj=M,uj=0;
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			if(sig[i][j]=='1'){
				if(i<li)
					li=i;
				if(i>ui)
					ui=i;
				if(j<lj)
					lj=j;
				if(j>uj)
					uj=j;
			}
		}
	}
	//cout<<li<<ui<<lj<<uj<<endl;
	vector<string> kernel;
	for(int i=li;i<=ui;i++){
		string temp="";
		for(int j=lj;j<=uj;j++){
			//cout<<"#"<<sig[i][j]<<"#"<<endl;
			temp += sig[i][j];
		}
		kernel.push_back(temp);
	}
	return kernel;
}
int main(){
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
		int N,M;
		cin>>N>>M;
		vector<string> sig(N);
		vector<string> sig_(N);
		for(int j=0;j<N;j++){
			cin>>sig[j];
		}
		for(int j=0;j<N;j++){
			cin>>sig_[j];
		}
		/*for(int j=0;j<N;j++){
			cout<<sig[j];
			cout<<endl;
		}
		for(int j=0;j<N;j++){
			cout<<sig_[j];
			cout<<endl;
		}*/
		vector<string> kernel = find_kernel(sig,N,M);
		int len = kernel.size();
		int bred = kernel[0].size();
		//cout<<len<<bred;
		int ans = 1000;
		for(int j=0-len;j<N;j++){
			for(int k=0-bred;k<M;k++){
				int temp_ans = 0;
				for(int l=0;l<len;l++){
					for(int m=0;m<bred;m++){
						if(j+l>=N || k+m>=M || j+l<0 || k+m<0){
							if(kernel[l][m]!='0'){
								temp_ans++;
							}
						}
						else{
							if(kernel[l][m]!=sig_[j+l][k+m]){
								temp_ans++;
							}
						}
					}
				}
				if(temp_ans<ans){
					ans=temp_ans;
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}