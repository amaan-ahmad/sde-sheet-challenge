#include <bits/stdc++.h>
string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
	vector<int> adj[n + 1];
	const string YES = "Yes";
	const string NO = "No";
	for(int i = 0; i < edges.size(); i++) {
		int u = edges[i][0];
		int v = edges[i][1];
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	vector<bool> vis(n + 1, false);
			// node, parent
	queue<pair<int,int>> q;
	for(int i = 1; i <= n; i++) {
		if(!vis[i]){
			q.push({i, -1});
			vis[i] = true;
			while(!q.empty()){
				auto curr = q.front(); q.pop();
				int node = curr.first; 
				int parent = curr.second;
				for(auto child: adj[node]){
					if(!vis[child]) {
						vis[child] = true;
						q.push({child, node});
					} else if(child != parent) return YES;
				}
			}
		}
	}
	return NO;
}
