#include<bits/stdc++.h>
using namespace std;

int find(vector<int>& a, int l, int r){
	if(l>r){
		return 0;
	}
	if(l==r){
		return l;
	}
	int mid = (l+r)/2;
	if(a[mid]<a[mid+1] && a[mid]<a[mid-1]){
		return mid;
	}
	if(a[mid]<a[l]){
		return find(a,l,mid);
	}
	else{
		return find(a,mid,r);
	}
}
int main(){
	vector<int> a = {3,4,5,6,1,2};
	int n = 6;
	int pidx = find(a,0,n-1);
	cout<<pidx;
}