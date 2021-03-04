#include <bits/stdc++.h> 
using namespace std; 

class C{
public:
	int x, y, dis;  
	C(int a, int b, int c){
		x = a;
		y = b;
		dis = c;
	} 
}; 

bool isInside(int x, int y, int N){ 
	if(x >= 1 && x <= N && y >= 1 && y <= N){
		return true; 
	}
	return false; 
} 

int minStep(int N, pair<int,int> start, pair<int,int> target){ 
	int dx[] = { -2, -1, 1, 2, -2, -1, 1, 2 }; 
	int dy[] = { -1, -2, -2, -1, 1, 2, 2, 1 }; 
	queue<C> q; 
	q.push(C(start.first,start.second, 0)); 
	C t; 
	int x, y; 
	vector<vector<bool>> visit((N+1),vector<bool>(N+1,false)); 
	visit[start.first][start.second] = true; 

	while (!q.empty()){ 
		t = q.front(); 
		q.pop(); 
		if (t.x == target.first && t.y == target.second){
			return t.dis; 
		}

		for (int i = 0; i < 8; i++) { 
			x = t.x + dx[i]; 
			y = t.y + dy[i]; 
			if (isInside(x, y, N) && !visit[x][y]) { 
				visit[x][y] = true; 
				q.push(C(x, y, t.dis + 1)); 
			} 
		} 
	}
	return -1;
} 

int main() 
{ 
	int n;
	pair<int,int> start,target;
	cin>>n;
	int temp1,temp2,temp3,temp4;
	cin>>temp1>>temp2>>temp3>>temp4;
	start = {temp1,temp2};
	target = {temp3,temp4};
	cout << minStep(n,start,target); 
	return 0; 
} 
