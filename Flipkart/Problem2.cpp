#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int s = 0;
for(int i=1;i<n;i+=1){
	if(a[i].first>a[s].second || a[i].first>a[i-1].second){
		cnt+=1;
		s = i;
	}
	cnt+=1;
}