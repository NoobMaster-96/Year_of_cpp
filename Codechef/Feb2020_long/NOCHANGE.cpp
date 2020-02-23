#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,p;
		cin>>n>>p;
		vector<int> D(n);
		for(int i=0;i<n;i++){
			cin>>D[i];
		}
		int ans = 0;
		bool flag = 1;
		for(int i=0;i<n-1;i++){
			if(p%D[i] == 0){
				ans++;
			}
			if(D[i+1]%D[i]){
				flag = 0;
			}
		}
		if(p%D[n-1]==0){
			ans++;
		}
		if(flag && ans == n){
			cout<<"NO"<<endl;
		}
		else{
            cout<<"YES ";
            if(ans==n){
            vector<int> num(n,0);
            int req = p+D[0]-1;
            int sum = 0;
            int k = n-1;
            int left = p;
            while(1){
                if(k<0){
                    break;
                }
                int cnt = 0;
                if(left>=D[k] && left%D[k]==0){
                    cnt = (left/D[k]) - 1;
                    left -= D[k]*cnt;
                }else{
                    if(left<=0){
                        break;
                    }
                    else if(left<D[k]){
                        k--;
                        continue;
                    }else{
                        cnt = (left/D[k])+1;
                        left -= D[k]*cnt;
                    }
                }
                num[k] = cnt;
                k -= 1;
            }
            for(int i =0;i<n;i++){
            	 cout<<num[i]<<" ";
            }
            cout<<endl;
            }else{
                vector<int> num(n,0);
               for(int i=0;i<n;i++){
                    if(p%D[i]==0){
                        continue;
                    }else{
                        num[i] = (p/D[i])+1;
                        break;
                    }
                }
                for(int i=0;i<n;i++){
                    cout<<num[i]<<" ";
                }
            }
        }
	}
}