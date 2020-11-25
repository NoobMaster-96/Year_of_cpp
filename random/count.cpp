#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define l long

l countMax(vector<string> upright){
    int n = upright.size();
    if(n==0){
        return (l)0;
    }
    return (l)1;
}
int main(){
    int n;
    cin>>n;
    vector<string> a(n);
    for(int i=0;i<n;i++){
        getline(a[i],cin);
    }
    cout<<countMax(a);
}