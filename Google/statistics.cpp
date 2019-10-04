#include<bits/stdc++.h>
#include<map>
#include<math.h>
using namespace std;

void stats(vector< pair <string,int> > fruits, int n){
	int count=0,sum=0,max=0,min=1001;
	string str=fruits[0].first;
	for(int j = 0; j<n; j++){
		if(fruits[j].first.compare(str)==0){
			sum+=fruits[j].second;
			count++;
			if(fruits[j].second>max)
				max=fruits[j].second;
			if(fruits[j].second<min)
				min=fruits[j].second;
		}
		else{
			float avg = sum/count;
			cout<<str<<" "<<min<<" "<<max<<" "<<lround(avg)<<"\n";
			str=fruits[j].first;
			sum=fruits[j].second;
			min=fruits[j].second;
			max=fruits[j].second;
		}
	}
	float avg = sum/count;
	cout<<str<<" "<<min<<" "<<max<<" "<<lround(avg)<<"\n";
}
int main(){
	int C;
	cin>>C;
	for(int i = 0; i<C; i++){
		int n;
		vector< pair <string,int> > fruits;
		cin>>n;
		for(int j = 0; j<n; j++){
			pair <string,int> temp;
			cin>>temp.first>>temp.second;
			fruits.push_back(temp);
		}
		sort(fruits.begin(), fruits.end());
		stats(fruits,n);
	}
	return 0;
}