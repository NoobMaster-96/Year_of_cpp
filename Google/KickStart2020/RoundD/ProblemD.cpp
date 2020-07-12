#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
    int t;
    cin>>t;
    for(int z=1;z<=t;z++){
        int n,q;
        cin>>n>>q;
        vector<int> a(n);
        vector<int> o[n+1];
        for(int i=1;i<n;i++){
            cin>>a[i];
        }
        for(int i=1;i<=n;i++){
            o[i].push_back(i);
            int l = i-1, r = i;
            while(l!=0 || r!=n){
                if(l==0){
                    o[i].push_back(r+1);
                    r++;
                }
                else if(r==n){
                    o[i].push_back(l);
                    l--;
                }
                else if(a[l]<a[r]){
                    o[i].push_back(l);
                    l--;
                }
                else{
                    o[i].push_back(r+1);
                    r++;
                }
            }
        }
        cout<<"Case #"<<z<<": ";
        for(int i=0;i<q;i++){
            int u,v;
            cin>>u>>v;
            cout<<o[u][v-1]<<" ";
        }
        cout<<endl;
    }
}