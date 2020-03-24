#include<bits/stdc++.h>
using namespace std;

int binomialCoeff(int n, int k){ 
    int res = 1; 
    if(k > n - k){
    	k = n - k; 
    }
    for(int i = 0; i < k; ++i){ 
        res *= (n - i); 
        res /= (i + 1); 
    } 
      
    return res; 
} 
  

void printPascal(int n){
    for (int line = 0; line < n; line++){
 		for(int i=n-1-line;i>=0;i--){
 			cout<<" ";
 		}
        for (int i = 0; i <= line; i++){
        	cout<<binomialCoeff(line,i)<<" ";
        } 
        cout<<endl;
    } 
} 

int main() 
{ 
    int n;
    cin>>n; 
    printPascal(n); 
    return 0; 
} 