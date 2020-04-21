#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int
int main(){
	int t;
	cin>>t;
	for(int z=1;z<=t;z++){
		 int n;
		 lli d;
		 cin>>n>>d;
		 vector<lli> x(n);
		 for(int i=0;i<n;i++){
		 	cin>>x[i];
		 }
		 lli ans = (d/x[n-1])*x[n-1];
		 for(int i=n-2;i>=0;i--){
		 	ans = min(ans,(ans/x[i])*x[i]);
		 }
		 cout<<"Case #"<<z<<": "<<ans<<endl;
	}
}