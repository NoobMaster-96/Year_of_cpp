#include<bits/stdc++.h>
using namespace std;
#define pip pair<int,pair<int,float>>

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i+=1){
        cin>>a[i];
    }
    int m;
    cin>>m;
    int i=0,j=0;
    int cost = 0;
    int ans = 0;
    while(j<n){
        if(cost>m){
            cost -= a[i];
            i++;
        }
        else{
            cost += a[j];
            j++;
            if(cost<=m){
                ans = max(ans,j-i);
            }
        }
    }
    cout<<ans;
}