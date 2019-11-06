#include<bits/stdc++.h>
#include<math.h>
using namespace std;

bool checkchef(string str){
	bool flag=0;
	int len = str.length();
	int c=0,v=0;
	for(int i=0;i<len;i++){
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
			v++;
		else
			c++;
	}
	if(v>=c)
		return 1;

	return 0;
}
int main(){
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
		int L,N=0,M=0;
		cin>>L;
		vector<string> Alice;
		vector<string> Bob;
		string str;
		for(int j=0;j<L;j++){
			cin>>str;
			bool check = checkchef(str);
			sort(str.begin(),str.end());
			if (check==1){
				Alice.push_back(str);
				N++;
			}
			else{
				Bob.push_back(str);
				M++;
			}
		}
		string Achar;
		vector<double> Apresent(26,0);
		vector<double> Afpresent(26,0);
		string Bchar;
		vector<double> Bpresent(26,0);
		vector<double> Bfpresent(26,0);
		for(int i=0;i<26;i++){
			char c = 97+i;
			Achar.push_back(c);
			Bchar.push_back(c);
		}

		for(int j=0;j<N;j++){
			int len = Alice[j].length();
			char x = Alice[j][0];
			double freq = 1;
			Apresent[x-97] = 1;
			for(int k=1;k<len;k++){

			}
		}
		//cout<<Achar<<endl<<Bchar;
		/*for(int j=0;j<N;j++){
			cout<<Alice[j]<<endl;
		}
		cout<<"#####"<<endl;
		for(int j=0;j<M;j++){
			cout<<Bob[j]<<endl;
		}*/

	}
}