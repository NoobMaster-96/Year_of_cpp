#include<bits/stdc++.h>
using namespace std;

int main(){
  	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int sum = 0;
		int validation = 0;
		int n,k;
		cin>>n>>k;
		bool flag = true;
		int b = 101;
		for(int j=0;j<n;j++){
			int temp;
			cin>>temp;
			validation += k;
			sum += temp;
			if(sum<validation){
				if(j+1<b){
					b = j+1;
				}
				
				flag = false;	
			}
		}
		if(flag == true){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO "<<b<<endl;
		}
	}
	return 0;
}