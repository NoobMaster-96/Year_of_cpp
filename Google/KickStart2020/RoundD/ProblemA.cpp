#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
    int t;
    cin>>t;
    for(int z=1;z<=t;z++){
    	int n;
        cin>>n;
        vector<int> a(n);
        stack<int> s;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int ans = 0, m = -1;
        vector<int> b(n);
        b[0] = 0;
        for(int i=1;i<n;i++){
            b[i] = a[i]-a[i-1];
        }
        for(int i=0;i<n;i++){
            if(i==n-1){
                if(a[i]>m){
                    s.push(a[i]);
                }
            }
            else{
                if(a[i]>m && a[i]>a[i+1]){
                    s.push(a[i]);
                    m = a[i];
                }
                m = max(m,a[i]);
            }
        }
        ans = s.size();
        cout<<"Case #"<<z<<": "<<ans<<endl;
    }
}