#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

// Algo works in O(n) time.

const int N = 2e5+5;
vector<int> adjList[N]; // Adjacency list of tree
int dp[N],lvl[N]; 

// Function to calculate level of each Node 
void dfs1(int cur, int par) { 
    for (auto child : adjList[cur]) { 
    	if(child==par) continue;
        dfs1(child, cur); 
        lvl[cur] = max(lvl[cur], lvl[child]); // Calculating level of the nodes
    } 
    lvl[cur] += 1; 
} 
  
// Function to calculate the maximum distance of a node from its ancestor 
void dfs2(int cur, int par) { 
    int max1 = 0; 
    int max2 = 0;
    for (auto child : adjList[cur]) { 
    	if(child==par) continue;
        	// Finding two children with maximum level
        if (lvl[child] >= max1) { 
			max2 = max1; 
		    max1 = lvl[child]; 
        } 
		else if (lvl[child] > max2) { 
			max2 = lvl[child]; 
        }
    }
    int sum = 0;
    for (auto child : adjList[cur]) { 
    	if(child==par) continue;
        sum = ((max1 == lvl[child]) ? max2 : max1);  
        if (max1 == lvl[child]) 
            dp[child] = 1 + max(1 + max2, dp[cur]); 
        else
            dp[child] = 1 + max(1 + max1, dp[cur]); 
        dfs2(child, cur);  
    } 
} 

int main(){
	int n;
	cin>>n;
	// Building the tree
	for(int i=0;i<n-1;i++){
		int u,v;
		cin>>u>>v;
		adjList[u].push_back(v);
		adjList[v].push_back(u);
	}
	// Initializing dp and lvl array with 0
	memset(dp,0,sizeof(dp)); 
	memset(lvl,0,sizeof(lvl));
	dfs1(1,-1);
	dfs2(1,-1);
	vector<int> ans(n+1,0);
	for(int i=1;i<=n;i++){
		ans[i] = max(dp[i],lvl[i])-1;
	}
	// Printing the output
	for(int i=1;i<=n;++i){
		cout<<ans[i]<<" ";
	}
}