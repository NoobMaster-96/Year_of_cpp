#include<bits/stdc++.h>
using namespace std;

int minimumSwap(string a, string b){
	int lena = a.length(), lenb = b.length();
	if(lena != lenb){
		return -1;
	}
	int xy = 0, yx = 0;
	for(int i=0;i<lena;i++){
		if(a[i] != b[i] && a[i] == 'x'){
			xy++;
		}
		else if(a[i] != b[i] && a[i] == 'y'){
			yx++;
		}
	}
	if((xy+yx)%2 != 0){
		return -1;
	}
	int ans = 0;
	ans += xy/2;
	ans += yx/2;
	xy %= 2;
	yx %= 2;
	ans += xy;
	ans += yx;
	
	return ans;
}

int main(){
	string a,b;
	cin>>a>>b;
	int ans = minimumSwap(a,b);
	cout<<ans<<endl;
}