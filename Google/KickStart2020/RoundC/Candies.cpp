#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define lli long long int 

void prefSumCreation(vector<lli> &pSum, vector<lli> &aug_pSum, vector<lli> &a, lli n) {
    pSum[0] = a[0];
    aug_pSum[0] = a[0];
    lli cnt = 2;
    for (lli i = 1; i < n; ++i) {
        lli val = a[i] * ((i & 1) ? -1 : 1);
        pSum[i] = (pSum[i - 1] + val);
        aug_pSum[i] = (aug_pSum[i - 1] + val * cnt);
        ++cnt;
    }
}

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    for(int z = 1;z<=t;z++) {
        lli n,q;
        cin>>n>>q;
        vector<lli> v(n);
        for(lli i=0;i<n;i++) {
            cin>>v[i];
        }
        lli ans = 0;
        vector<lli> pSum(n), aug_pSum(n);
        prefSumCreation(pSum, aug_pSum, v, n);
        while(q--){
            char ch;
            cin >> ch;
            if(ch == 'Q'){
                lli l, r;
                cin >> l >> r;
                l--;
                r--;
                lli curr_ans;
                if(l == 0){
                    curr_ans = aug_pSum[r];
                }
                else{
                    curr_ans = aug_pSum[r] - aug_pSum[l - 1] - (l) * (pSum[r] - pSum[l - 1]);
                }
                if (l & 1) {
                    curr_ans *= -1;
                }
                ans += curr_ans;
            }
            else{
                lli idx, value;
                cin >> idx >> value;
                v[--idx] = value;
                prefSumCreation(pSum, aug_pSum, v, n);
            }
        }
        cout <<"Case #"<<z<<": "<<ans<<endl;
    }
}