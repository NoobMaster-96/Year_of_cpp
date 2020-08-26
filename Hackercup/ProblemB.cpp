#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(n==1){
            cout<<"First"<<endl;
            continue;
        }
        int moves = 0;
        for(int i=0;i<n-1;i++){
            if(a[i]==1){
                moves += 1;
            }
            else{
                if(a[i+1]==1){
                    int j = i+1;
                    while(j<n-1 && a[j]==1){
                        j++;
                    }
                    moves += 2;
                    i = j-1;
                }
                else{
                    moves += 2;
                }
            }
        }
        if(moves%2==0){
            cout<<"First"<<endl;
        }
        else{
            cout<<"Second"<<endl;
        }
    }
}