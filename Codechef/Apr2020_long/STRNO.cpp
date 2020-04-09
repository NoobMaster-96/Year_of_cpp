#include<bits/stdc++.h>
using namespace std;

int Factors(int n){
	int num = 0; 
    while(n % 2 == 0){  
        num++;  
        n = n/2;  
    }  
    for(int i = 3; i <= sqrt(n); i = i + 2){ 
        while(n % i == 0){  
            num++;  
            n = n/i;  
        }  
    }
    if(n>2){
    	num++;
    }
    return num;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int x,k;
		cin>>x>>k;
		int n = Factors(x);
		if(n<k){
			cout<<0<<endl;
		}
		else{
			cout<<1<<endl;
		}
	}
	return 0; 
}