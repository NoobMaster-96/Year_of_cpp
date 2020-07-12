#include <bits/stdc++.h>
#include<unordered_map>
#include<unordered_set>
using namespace std;

const int N = 105;
int a[N];
void dfs(unordered_set<int> &vis,int i,int val){
    int cnt=0;
    while(i!=-1){
        if(cnt%val==0)
            vis.insert(i);
        i=a[i];
        cnt+=1;
    }
}

int main(){
    int tc=1;
    cin >> tc;
    for(int t=1;t<tc+1;t++){
        cout<<"Case #"<<t<<": ";
        int n,A,B;
        cin>>n>>A>>B;
        a[1] = -1;
        for(int i=2;i<n+1;i++){
            cin>>a[i];
        }
        double ans=0;
        unordered_set<int> vis;
        for(int i=1;i<n+1;i++){
            for(int j=1;j<n+1;j++){
                vis.clear();
                dfs(vis,i,A);
                dfs(vis,j,B);
                ans += vis.size();
            }
        }
        ans/=n;
        ans/=n;
        cout<<fixed<<setprecision(6)<<ans<<endl;
    }
}