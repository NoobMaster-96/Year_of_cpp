#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<int> a(n);
		vector<int> flavours(k+1,0);
		int cnt = 0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(flavours[a[i]] == 0){
				cnt++;
				flavours[a[i]] = 1;
			}
		}
		if(cnt<k){
			cout<<n<<endl;
			continue;
		}
		vector<int> b[k+1];
		for(int i=0;i<n;i++){
			b[a[i]].push_back(i);
		}
		int ans = 0;
		for(int i=1;i<k+1;i++){
			int len = b[i].size();
			if(len>0){
				ans = max(ans,(b[i][0]));
			}
			for(int j=1;j<len;j++){
				ans = max((b[i][j]-b[i][j-1]-1),ans);
			}
			ans = max(ans,(n-b[i][len-1]-1));
		}
		cout<<ans<<endl;
	}
}