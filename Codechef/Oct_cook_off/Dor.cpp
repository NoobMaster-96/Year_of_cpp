#include <bits/stdc++.h> 
using namespace std; 

long long int MSBPosition(long long int N) 
{ 
	long long int msb_p = -1; 
	while (N) { 
		N = N >> 1; 
		msb_p++; 
	} 
	return msb_p; 
} 

long long int findBitwiseOR(long long int L, 
							long long int R) 
{   
	long long int res = 0; 

	long long int msb_p1 = MSBPosition(L); 

	long long int msb_p2 = MSBPosition(R); 

	while (msb_p1 == msb_p2) { 
		long long int res_val = (1ll << msb_p1); 
		res += res_val; 

		L -= res_val; 
		R -= res_val; 

		msb_p1 = MSBPosition(L); 
		msb_p2 = MSBPosition(R); 
	} 
	msb_p1 = max(msb_p1, msb_p2); 

	for (long long int i = msb_p1; i >= 0ll; i--) { 
		long long int res_val = (1ll << i); 
		res += res_val; 
	} 
	return res; 
} 

int main() 
{ 	ios::sync_with_stdio(false);
  	cin.tie(0);
  	cout.tie(0);
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		long long int L,R;

		cin>>L>>R; 
		cout << findBitwiseOR(L, R) << endl; 
		
	}
	return 0; 
} 
