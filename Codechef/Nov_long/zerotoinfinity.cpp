#include<bits/stdc++.h>
#include<math.h>
using namespace std;
#define ll_i long long int
bool checkchef(char ch){
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
		return 1;
	else
		return 0;
}

bool divide(string str){
	bool check=0;
	for(ll_i i=0;i<str.size();i++){
		if(!checkchef(str[i])&&(i<str.size()-2)){
			if(checkchef(str[i+1])&&checkchef(str[i+2])){
				check = 1;
			}
			else{
				return 0;
			}
		}
		if(!checkchef(str[i])&&(i==str.size()-2)){
			if(checkchef(str[i+1])){
				return 1;
			}
			else{
				return 0;
			}
		}
	}
	return 1;
}

int main(){
	ll_i T;
	cin>>T;
	for(ll_i t=0;t<T;t++){
		ll_i L,N=0,M=0;
		cin>>L;
		vector<string> Alice;
		vector<string> Bob;
		string str;
		for(ll_i j=0;j<L;j++){
			cin>>str;
			bool check = divide(str);
			//sort(str.begin(),str.end());
			if (check==1){
				Alice.push_back(str);
				N++;
			}
			else{
				Bob.push_back(str);
				M++;
			}
		}

		if(N==0){
			cout<<0.0<<endl;
			continue;
		}
		if(M==0){
			cout<<"Infinity"<<endl;
			continue;
		}
		ll_i tcnt[26];
		ll_i cnt[26];
		memset(tcnt,0,sizeof(tcnt));
		memset(cnt,0,sizeof(cnt));
		for(auto i:Bob){
			set<char> str;
            for (auto j : i){
                tcnt[j - 'a']++;
                str.insert(j);
            }
            for (auto j : str){
                cnt[j - 'a']++;
            }
		}
		double val = 0;
        for (ll_i i = 0; i < 26; i++){
            if (tcnt[i]){
                val += (-log10(cnt[i])) + (double)M * (log10(tcnt[i]));
            }
        }
        memset(tcnt,0,sizeof(tcnt));
		memset(cnt,0,sizeof(cnt));
		for(auto i:Alice){
			set<char> str;
            for (auto j : i){
                tcnt[j - 'a']++;
                str.insert(j);
            }
            for (auto j : str){
                cnt[j - 'a']++;
            }
		}
        for (ll_i i = 0; i < 26; i++){
            if (tcnt[i]){
                val += (log10(cnt[i])) - (double)N * (log10(tcnt[i]));
            }
        }
        if (val > 7){
            cout << "Infinity" << endl;
        }
        else{
            cout << fixed;
            cout << setprecision(10) << pow(10.00, val) << endl;
        }
	}
}