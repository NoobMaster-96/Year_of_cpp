#include<bits/stdc++.h>
using namespace std;

long long gcd(long long int a, long long int b){
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

long long lcm(int a, int b){
    return (a / gcd(a, b)) * b;
}

long long FinalValues(long long A, long long B, long long C){
	long long ans;
	if(A==B){
		ans = C/A;
		return ans;
	}
	long long l = lcm(A,B);
	set<long long> a,b;
	long long tmpA = A, tmpB = B;
	while(tmpA<=l){
		a.insert(tmpA);
		tmpA += A;
	}
	while(tmpB<=l){
		b.insert(tmpB);
		tmpB += B;
	}
	cout<<a.size();
	cout<<b.size();
	set<long long> an;
	for(auto x:a){
		for(auto y:b){
			if(abs(x-y)>0){
				an.insert(abs(x-y));
			}
			an.insert(x+y);
		}
	}
	ans = (C/l)*(long long)an.size();
	return ans;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		long long A,B,C,out;
		cin>>A>>B>>C;
		out = FinalValues(A,B,C);
		cout<<out<<endl;
	}
}