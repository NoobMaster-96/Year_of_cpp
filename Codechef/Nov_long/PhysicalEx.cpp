#include<bits/stdc++.h>
#include<math.h>
using namespace std;

double dist(vector<int> start, vector<int> mid1, vector<int> mid2, vector<int> end){
	
	double distance1=0;
	double distance2=0;
	double distance3=0;
	distance1 = sqrt(pow((mid1[0]-start[0]),2)+pow((mid1[1]-start[1]),2));
	distance2 = sqrt(pow((mid2[0]-mid1[0]),2)+pow((mid2[1]-mid1[1]),2));
	distance3 = sqrt(pow((end[0]-mid2[0]),2)+pow((end[1]-mid2[1]),2));

	return distance1+distance2+distance3;
}
int main(){
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
		vector<int> start(2,0);
		cin>>start[0]>>start[1];
		int N,M,K;
		cin>>N>>M>>K;
		vector<vector<int>> Np;
		vector<vector<int>> Mp;
		vector<vector<int>> Kp;
		for(int j=0;j<N;j++){
			vector<int > point(2,0);
			cin>>point[0];
			cin>>point[1];
			Np.push_back(point);
		}
		for(int j=0;j<M;j++){
			vector<int > point(2,0);
			cin>>point[0];
			cin>>point[1];
			Mp.push_back(point);
		}
		for(int j=0;j<K;j++){
			vector<int > point(2,0);
			cin>>point[0];
			cin>>point[1];
			Kp.push_back(point);
		}
		double distance = dist(start,Np[0],Mp[0],Kp[0]);
		//cout<<distance<<endl;
		for(int i=0;i<N;i++){
			for(int j=0;j<M;j++){
				for(int k=0;k<K;k++){
					double temp = dist(start,Np[i],Mp[j],Kp[k]);
					//cout<<temp<<endl;
					if(temp<distance){
						distance=temp;
					}
				}
			}
		}
		for(int i=0;i<M;i++){
			for(int j=0;j<N;j++){
				for(int k=0;k<K;k++){
					double temp = dist(start,Mp[i],Np[j],Kp[k]);
					//cout<<temp<<endl;
					if(temp<distance){
						distance=temp;
					}
				}
			}
		}
		cout<<setprecision(7)<<distance<<endl;
	}

	return 0;
}