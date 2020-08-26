#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int

void finddsu(vector<int> *graph,vector<int> &dsu,int node,int i){
	dsu[node] = i;
	for(auto nbr:graph[node]){
		if(dsu[nbr]==-1){
			finddsu(graph,dsu,nbr,i);
		}
	}
}

int main(){
	int n,m;
	cin>>n>>m;
	vector<ll> a(n+1),b(n+1);
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		cin>>b[i];
	}
	vector<int> graph[n+1];
	for(int i=0;i<m;i++){
		int u,v;
		cin>>u>>v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	vector<int> dsu(n+1,-1);
	int j = 1;
	for(int i=1;i<=n;i++){
		if(dsu[i]==-1){
			finddsu(graph,dsu,i,j);
			j++;
		}
	}
	map<ll,vector<int>> mp;
	for(int i=1;i<=n;i++){
		mp[b[i]].push_back(i);
	}
	int hd = 0;
	for(int i=1;i<n;i++){
		if(a[i]!=b[i]){
			bool flag = false;
			for(auto x:mp[a[i]]){
				if(dsu[i]==dsu[x]){
					mp[a[i]].erase(remove(mp[a[i]].begin(),mp[a[i]].end(),x),mp[a[i]].end());
					flag = true;
					break;
				}
			}
			if(!flag){
				hd++;
			}
		}
	}
	cout<<hd<<endl;
}