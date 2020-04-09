#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		int n;
		cin>>n;
		int mat[n][n];
		int trace = 0;
		int r=0,c=0;
		for(int j=0;j<n;j++){
			for(int k=0;k<n;k++){
				cin>>mat[j][k];
				if(j==k){
					trace += mat[j][k];
				}
			}
		}
		set<int> s;
		for(int j=0;j<n;j++){
			s.clear();
			for(int k=0;k<n;k++){
				if(s.find(mat[j][k])==s.end()){
					s.insert(mat[j][k]);
				}
				else{
					r++;
					break;
				}
			}
		}
		for(int j=0;j<n;j++){
			s.clear();
			for(int k=0;k<n;k++){
				if(s.find(mat[k][j])==s.end()){
					s.insert(mat[k][j]);
				}
				else{
					c++;
					break;
				}
			}
		}
		cout<<"Case #"<<i<<": "<<trace<<" "<<r<<" "<<c<<endl;
	}
}