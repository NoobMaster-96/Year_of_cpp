#include<bits/stdc++.h>
#include<math.h>
using namespace std;

double dist(pair<int,int> S, pair<int,int> E){
	double distance = sqrt(pow(S.first-E.first,2)+pow(S.second-E.second,2));
	return distance;
}
int main(){
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
		pair <int,long long int> start;
		int x,y;
		cin>>x>>y;
		start = make_pair(x,y);
		int N,M,K;
		cin>>N>>M>>K;
		//cout<<"####"<<endl;
		vector<pair<int,int>> A;
		vector<pair<int,int>> B;
		vector<pair<int,int>> C;
		for(int j=0;j<N;j++){
			pair <int,int> point;
			int x,y;
			cin>>x>>y;
			point = make_pair(x,y);
			A.push_back(point);
		}
		//cout<<"####"<<endl;
		for(int j=0;j<M;j++){
			pair <int,int> point;
			int x,y;
			cin>>x>>y;
			point = make_pair(x,y);
			B.push_back(point);
		}
		//cout<<"####"<<endl;
		for(int j=0;j<K;j++){
			pair <int,int> point;
			int x,y;
			cin>>x>>y;
			point = make_pair(x,y);
			C.push_back(point);
		}
		//cout<<"####"<<endl;
		vector<double> S_A;
		vector<double> S_B;
		vector<vector<double>> A_B;
		vector<double> A_C;
		vector<double> B_C;
		for(int j=0;j<N;j++){
			double distance = dist(start,A[j]);
			S_A.push_back(distance);
		}
		for(int j=0;j<M;j++){
			double distance = dist(start,B[j]);
			S_B.push_back(distance);
		}
		for(int j=0;j<N;j++){
			vector<double> temp;
			for(int k=0;k<M;k++){
				double distance = dist(A[j],B[k]);
				temp.push_back(distance);
			}
			A_B.push_back(temp);
		}
		for(int j=0;j<N;j++){
			double min_distance = dist(A[0],C[0]);
			for(int k=0;k<K;k++){
				double distance = dist(A[j],C[k]);
				if(distance<min_distance){
					min_distance = distance;
				}
			}
			A_C.push_back(min_distance);
		}
		for(int j=0;j<M;j++){
			double min_distance = dist(B[0],C[0]);
			for(int k=0;k<K;k++){
				double distance = dist(B[j],C[k]);
				if(distance<min_distance){
					min_distance = distance;
				}
			}
			B_C.push_back(min_distance);
		}
		double ans = S_A[0]+A_B[0][0]+B_C[0] ;
		for(int j=0;j<N;j++){
			for(int k=0;k<M;k++){
				double distance = S_A[j] + A_B[j][k] + B_C[k];
				if(distance<ans){
					ans = distance;
				}
			}
		}
		for(int j=0;j<M;j++){
			for(int k=0;k<N;k++){
				double distance = S_B[j] + A_B[k][j] + A_C[k];
				if(distance<ans){
					ans = distance;
				}
			}
		}
		cout<<setprecision(15)<<ans<<endl;
	}
	return 0;
}