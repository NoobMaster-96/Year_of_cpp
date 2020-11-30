#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

ll nCr(ll n, ll k){
    if(n==0 && k==0) return 0;
    ll res = 1;
    if ( k > n - k )
        k = n - k;
    for (ll i = 0; i < k; ++i){
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t = 1;
    cin>>t;
    ll x, y, k;
    while(t--){
        cin>>x>>y>>k;
        while(1){
            if(x==0 && y==0) break;
            else if(x==0){
                cout<<"V";
                y--;
            }
            else if(y==0){
                cout<<"H";
                x--;
            }
            else {
                if(nCr(x+y-1, x-1) > k){
                    x--;
                    cout<<"H";
                }
                else {
                    k = k - nCr(x+y-1, x-1);
                    y--;
                    cout<<"V";
                }
            }
        }
        cout<<"\n";
    }
    return 0;
}