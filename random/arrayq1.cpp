#include<bits/stdc++.h>
using namespace std;
#define ll long long
int count(vector<ll>& a,ll I){
    int n = a.size();
    ll p = 1;
    int res = 0;
    for(int s = 0, e = 0; e < n; e+=1) {
		p *= a[e];
        while (s < e && p >= I){
            p /= a[s++];
        }
        if (p < I) {
            int len = e - s + 1;
            res += len;
        }
    }
    return res;
}

int main(){
	int N;
	ll I;
	cin>>N>>I;
	vector<ll> a(N);
	for(int i=0;i<N;i+=1){
		cin>>a[i];
	}
	cout<<count(a,I);
}