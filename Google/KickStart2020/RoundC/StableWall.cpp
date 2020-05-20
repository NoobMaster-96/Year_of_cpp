#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int 

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	lli t;
	cin>>t;
	vector<lli> dp;
	for(lli i=0;i*i<10000000;i++){
		dp.push_back(i*i);
	}
	for(lli z=1;z<=t;z++){
		lli n;
		cin>>n;
		vector<lli> a(n+1);
		for(lli i=0;i<n;i++){
			cin>>a[i];
		}
		for(lli i=1;i<n;i++){
			a[i] +=a[i-1];
		}
		unordered_map<lli,lli> m;
        lli mini = 1e18;
        lli maxi = (lli)-1*1e18;
        lli cnt = 0;
        for(lli i=0;i<n;i++){
            maxi=max(maxi,a[i]);
            mini=min(mini,a[i]);
            if(binary_search(dp.begin(),dp.end(),a[i])){
                cnt += 1;
            }
            for(lli j=0;j<dp.size() && dp[j]<=max(a[i]-mini,maxi-a[i]);j+=1){
                if(m.find(a[i]-dp[j])!=m.end())
                    cnt += m[a[i]-dp[j]];
            }
            m[a[i]]+=1;
        }
		cout<<"Case #"<<z<<": ";
		cout<<cnt;
		cout<<endl;
	}
}