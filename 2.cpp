#include <bits/stdc++.h> 
using namespace std; 
void print_BFS(int curr, int N, vector<bool>& vis, 
		vector<int>& dp, vector<int>& v, 
		vector<vector<int> >& adj) 
{ 

	while (curr <= N) { 
		int node = v[curr - 1]; 
		cout << node << ", "; 

		for (int i = 0; i < adj[node].size(); i++) { 
			int next = adj[node][i]; 

			if ((!vis[next]) 
				&& (dp[next] < dp[node] + 1)) { 
				v.push_back(next);  
				dp[next] = dp[node] + 1; 
				vis[next] = true; 
			}} 
		curr += 1; 
}} 

void printt( 
	vector<vector<int> >& adj, 
	int N, int source) 
{   vector<bool> vis(N + 1, false); 
	vector<int> dp(N + 1, 0), v; 

	v.push_back(source); 
	dp = 0; 
	vis = true; 
	print_BFS(1, N, vis, dp, v, adj); 
} 
int main() 
{ 
	int N = 4; 
	vector<vector<int> > adj(N + 1); 
	adj[0].push_back(1); 
	adj[0].push_back(2); 
	adj[1].push_back(2); 
	adj[2].push_back(3); 
	adj[2].push_back(3); 
	adj[3].push_back(3); 
	printt(adj, N, 2); 

	return 0; 
} 
