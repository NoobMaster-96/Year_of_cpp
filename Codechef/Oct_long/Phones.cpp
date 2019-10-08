#include<bits/stdc++.h>
using namespace std;

int minimun(vector< int > P, int start, int end){
	int min = P[start];
	for(int i = start+1; i<=end; i++){
		if(P[i]<min)
			min = P[i];
	}
	return min;
}
void check_price(vector< int > P, int N){
	int count = 1;
	for(int i = 1; i<N; i++){
		if(i<5){
			if(P[i]<minimun(P,0,i-1))
				count++;
		}
		else{
			if(P[i]<minimun(P,i-5,i-1))
				count++;
		}
	}
	cout<<count<< endl;
}
int main(){
	int T;
	cin>>T;
	for(int i = 0; i<T; i++){
		int N;
		cin>>N;
		vector < int > P(N,0);
		for(int j = 0; j<N; j++){
			cin>>P[j];
		}
		check_price(P,N);
	}

	return 0;
}