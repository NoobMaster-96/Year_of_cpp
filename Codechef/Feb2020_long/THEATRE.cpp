#include<bits/stdc++.h>
using namespace std;
int A[] = {0,0,0,0,0,0,1,1,1,1,1,1,2,2,2,2,2,2,3,3,3,3,3,3};
int B[] = {1,1,2,2,3,3,2,3,3,0,2,0,3,0,1,3,0,1,0,2,0,1,1,2};
int C[] = {2,3,1,3,1,2,3,2,0,2,0,3,0,1,3,1,3,0,1,0,2,0,2,1};
int D[] = {3,2,3,1,2,1,0,0,2,3,3,2,1,3,0,0,1,3,2,1,1,2,0,0};
int main(){
	int t;
	cin>>t;
	long long int ans=0;
	while(t--){
		int n;
		cin>>n;
		int slots[4][4];
		memset(slots,0,sizeof(slots));
		for(int i=0;i<n;i++){
			char a;
			int b;
			cin>>a>>b;
			slots[a-65][b/3-1]++;
		}
		long long int profit = -500;
		for(int i=0;i<24;i++){
			long long int money = 0; 
			vector<int> temp;
			temp.push_back(slots[0][A[i]]);
			temp.push_back(slots[1][B[i]]);
			temp.push_back(slots[2][C[i]]);
			temp.push_back(slots[3][D[i]]);
			sort(temp.begin(),temp.end());
			for(int j=0;j<4;j++){
				if(temp[j] == 0){
					money -= 100;
				}
				else{
					money += (j+1)*25*temp[j];
				}
			}
			profit = max(profit,money);
		}
		cout<<profit<<endl;
		ans += profit;
	}
	cout<<ans<<endl;
}