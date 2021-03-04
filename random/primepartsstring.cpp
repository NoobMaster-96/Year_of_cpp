#include<bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;
bool sieve[1000001];

void buildSieve(){
	memset(sieve,1,sizeof(sieve));
	sieve[0] = 0;
	sieve[1] = 0;
	for(int p=2;p*p<=1000000;p+=1){
		if(sieve[p]==true){
			for(int i=p*p;i<=1000000;i+=p){
				sieve[i] = 0;
			}
		}
	}
}

bool isPrime(string number){
	int num = 0;
	int len = number.length();
	for(int i=0;i<len;i+=1){
		num *= 10;
		num += number[i]-'0';
	}
	return sieve[num];
}

int rec(string &number, int i, vector<int>& dp){
	if(dp[i]!=-1){
		return dp[i];
	}
	int cnt = 0;
	for(int j=1;j<=6;j+=1){
		if((i-j)>=0 && number[i-j]!='0' && isPrime(number.substr(i-j,j))){
			cnt += rec(number,i-j,dp);
			cnt %= MOD;
		}
	}
	return dp[i] = cnt;
}

int countPrimeStrings(string &number){
	int n = number.length();
	vector<int> dp(n+1,-1);
	buildSieve();
	dp[0] = 1;
	return rec(number,n,dp);
}

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i+=1){
		string str;
		cin>>str;
		cout<<countPrimeStrings(str)<<endl;
	}
}