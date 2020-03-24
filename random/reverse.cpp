#include<bits/stdc++.h>
using namespace std;

int main(){
	int q;
	cin>>q;
	vector<int> A;
	A.push_back(0);
	for(int i=0;i<q;i++){
		int check;
		cin>>check;
		if(!check){
			int temp;
			cin>>temp;
			A.push_back(temp);
		}
		else{
			int L,R,X;
			cin>>L>>R>>X;
			int maxi = X^A[L];
			int element = A[L];
			for(int i=L;i<=R;i++){
				if((X^A[i])>maxi){
					maxi = X^A[i];
					element = A[i];
				}
			}
			cout<<element<<endl;
		}
	}
}