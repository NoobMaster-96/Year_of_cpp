#include<bits/stdc++.h>
using namespace std;
bool prime[2000007];

int main(){
	int t;
	cin>>t;
	memset(prime,true,sizeof(prime));
	prime[0] = false;
	prime[1] = false;
	for (int p=2; p*p<2000007; p++){
        if(prime[p] == true){  
            for (int i=p*p; i<2000007; i += p){
                prime[i] = false; 
            }
        } 
    }
	while(t--){
		int n;
		cin>>n;
		vector<int> a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int ans = 0;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(prime[a[i]+a[j]]){
					ans++;
				}
			}
		}
		cout<<ans<<endl;
	}
}