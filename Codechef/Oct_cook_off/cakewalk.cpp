#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool check (ll x){  
    return (!(x&(x-1ll)));  
}
int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0);
  	cout.tie(0);
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
    	ll n;
    	cin>>n;
    	
    	int val = 0;
    	bool flag = false;
    	for(int i=0;i<18;i++){
    		if(n%10ll==0ll){
    			n = n/10ll;
    			val++;
    		}
    	}
    	if(n==1){
    		flag = true;
    	}
    	else if(check(n) && n!=0){
    		int val1 = 0;
    		ll num = n;
    		while((num&1ll) == 0ll){
    			num = num>>1ll;
    			val1++;
    		}
    		if(val1<=val){
    			flag = true;
    		}else{
    			flag = false;
    		}
    	}
    	else{
    		flag = false;
    	}
    	if(flag){
    		cout<<"Yes"<<endl;
    	}else{
    		cout<<"No"<<endl;
    	}
    }
}