#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int sortbyfreq(vector<int> &arr, int n){
	int maxe = -1;
	for(int i=0;i<n;i+=1){
		maxe = max(maxe,arr[i]);
	}
	int freq[maxe+1] = {0};
	for(int i=0;i<n;i+=1){
		freq[arr[i]]++;
	}
	int cnt = 0;
	for(int i=0;i<=maxe;i+=1){
		if(freq[i]>0){
			int val = 100000-i;
			arr[cnt] = 100000*freq[i]+val;
			cnt++;
		}
	}
	return cnt;
}

void printarr(vector<int> &arr, int cnt){
	for(int i=0;i<cnt;i+=1){
		int freq = arr[i]/100000;
		int val = 100000-(arr[i]%100000);
		for(int j=0;j<freq;j+=1){
			cout<<val<<" ";
		}
	}
}

int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i+=1){
		cin>>a[i];
	}
	int cnt = sortbyfreq(a,n);
	sort(a.begin(),a.begin()+cnt,greater<int>());
	printarr(a,cnt);

	return 0;
}