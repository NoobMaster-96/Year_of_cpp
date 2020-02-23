#include<bits/stdc++.h>
using namespace std;
int dayofweek(int y){  
	int d = 1;
	int m = 2;
    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };  
    y -= m < 3;  
    return ( y + y / 4 - y / 100 +  y / 400 + t[m - 1] + d) % 7;  
}  

int main(){
	int t;
	cin>>t;
	while(t--){
		int m1,y1,m2,y2;
		cin>>m1>>y1>>m2>>y2;
		int ans = 0;
		if(m1>2){
			y1++;
		}
		if(m2<2){
			y2--;
		}
		int diff = y2-y1+1;
		ans = (diff/28)*7;
		for(int i=y1+(ans/7)*28;i<=y2;i++){
			if(i%4 == 0){
				if(dayofweek(i) == 6){
					ans++;
				}
			}
			else{
				if(dayofweek(i) == 6 || dayofweek(i) == 0){
					ans++;
				}
			}
		}
		ans += (y2-y1)/400;
		cout<<ans<<endl;
	}
}