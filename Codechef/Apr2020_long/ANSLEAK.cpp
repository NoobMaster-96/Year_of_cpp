#include<bits/stdc++.h>
using namespace std;
int tests[500][10];

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		memset(tests,0,sizeof(tests));
		for(int i=0;i<n;i++){
			for(int j=0;j<k;j++){
				int temp;
				cin>>temp;
				tests[i][temp]++;
			}
		}
		vector<int> answers(n);
		for(int i=0;i<n;i++){
			int ans = 1;
			for(int j=2;j<=9;j++){
				if(tests[i][j]>tests[i][ans]){
					ans = j;
				}
			}
			answers[i] = ans;
		}
		for(int i=0;i<n;i++){
			cout<<answers[i]<<" ";
		}
		cout<<endl;
	}
}