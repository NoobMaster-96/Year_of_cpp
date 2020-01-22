#include<bits/stdc++.h>
using namespace std;

string reversestring(string str){
	int len = str.length();
	string temp;
	for(int i = len-1; i>=0; i--){
		temp += str[i];
	}
	return temp;
}

int solve(string A, string B){
	int len = min(A.length(), B.length());
	int ans = 0;
	for(int i=0;i <len; i++){
		if(A[i] != B[i]){
			return ans;
		}
		ans++;
	}
	return ans;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<string> words(n);
		vector<string> reversewords;
		for(int i=0;i<n;i++){
			cin>>words[i];
		}
		sort(words.begin(),words.end());
		vecctor<int> used(n,1);
		int ans = 0;
		for(int i=1; i<=n-2; i++){
			if(used[i] != 0 && used[i-1] != 0 && used[i+1] != 0){
				if(solve(words[i],words[i-1])>solve(words[i],words[i+1]) && solve){
					ans += pow(solve(words[i],words))
				}
			}
		}
	}
}