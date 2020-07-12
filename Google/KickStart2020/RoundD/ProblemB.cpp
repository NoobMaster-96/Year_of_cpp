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
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int> note(n);
        note[0] = 1;
        int ans = 0;
        for(int i=1;i<n;i++){
            if(a[i]>a[i-1]){
                note[i] = note[i-1]+1;
            }
            else if(a[i]<a[i-1]){
                note[i] = note[i-1]-1;
            }
            else{
                note[i] = note[i-1];
            }
        }
        int s = 0, l = 0;
        for(int i=1;i<n;i++){
            if(a[i]>a[i-1]){
                l++;
                s = 0;
            }
            else if(a[i]<a[i-1]){
                s++;
                l = 0;
            }
            if(s==4 || l==4){
                ans++;
                l=0;s=0;
            }
        }
        cout<<"Case #"<<z<<": "<<ans<<endl;
    }
}