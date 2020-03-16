#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<char> a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int countH = 0;
		bool state = true;
		for(int i=0;i<k;i++){
			if(a[n-1-i] == 'H' && state == 1){
				countH++;
				state = 0;
			}
			else if(a[n-1-i] == 'T' && state == 0){
				countH++;
				state = 1;
			}
		}
		int ans = 0;
		for(int i=0;i<n-k;i++){
			if(a[i] == 'H'){
				ans++;
			}
		}
		if(countH % 2 == 1){
			ans = (n-k) - ans;
		}
		cout<<ans<<endl;
	}
}