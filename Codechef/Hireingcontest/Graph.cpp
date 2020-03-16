#include<bits/stdc++.h>
using namespace std;

void addedge(vector<int> adj[], int u, int v){
	adj[u].push_back(v);
	adj[v].push_back(u);
}

bool isBipartite(vector<int> adj[], int v, vector<bool>& visited, vector<int>& color){ 
    for (int u : adj[v]){ 
        if(visited[u] == false){
            visited[u] = true;
            color[u] = !color[v];
            if (!isBipartite(adj, u, visited, color)){
                return false; 
            }
        } 
        else if (color[u] == color[v]){
        	return false; 
        }   
    } 
    return true; 
}

int main(){
	int n,q;
	cin>>n>>q;
	vector<int> adj[n+1];
	vector<bool> visited(n+1);
	vector<int> color(n+1);
	for(int i=0;i<q;i++){
		int a,u,v;
		cin>>a>>u>>v;
		if(a==1){
			addedge(adj,u,v);
		}
		else if(a==2){
			for(int i=0;i<n+1;i++){
				color[i] = 0;
				visited[i] = false;
			}
			color[1] = 0;
			visited[1] = true;
			bool flag = false;
			vector<int>::iterator it;
			it = find(adj[u].begin(),adj[u].end(),v);
			if(it == adj[u].end()){
				flag == true;
				addedge(adj,u,v);
			}
			if(isBipartite(adj,1,visited,color)){
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
			if(flag == true){
				adj[u].pop_back();
				adj[v].pop_back();
			}
		}
	}
}