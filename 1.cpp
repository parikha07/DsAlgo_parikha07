#include <bits/stdc++.h>
using namespace std;
 
class Graph 
{ 
	int V; 
	list<int> *adj; 
	bool checkkon(int v, bool visited[], int parent); 
public: 
	Graph(int V); 
	void addEdge(int v, int w); 
	bool check(); 
}; 

Graph::Graph(int V) 
{ 
	this->V = V; 
	adj = new list<int>[V]; 
} 

void Graph::addEdge(int v, int w) 
{ 
	adj[v].push_back(w); 
	adj[w].push_back(v); 
} 
bool Graph::checkkon(int v, bool visited[], int parent) 
{ 
    the current node as visited 
	visited[v] = true; 

	list<int>::iterator i; 
	for (i = adj[v].begin(); i != adj[v].end(); ++i) 
	{ 
		if (!visited[*i]) 
		{ 
		if (checkkon(*i, visited, v)) 
			return true; 
		} 
		else if (*i != parent) 
		return true; 
	} 
	return false; 
} 

bool Graph::check() 
{ 
	bool *visited = new bool[V]; 
	for (int i = 0; i < V; i++) 
		visited[i] = false; 
	for (int u = 0; u < V; u++) 
		if (!visited[u]) 
		if (checkkon(u, visited, -1)) 
			return true; 

	return false; 
} 
 
int main() 
{
    Graph grp(3); 
	grp.addEdge(0, 1); 
	grp.addEdge(1, 2); 
	if(grp.check())
    cout << "Yes cycle hy";
    else
    cout << "No cycle nhi hy\n"; 
	return 0; 
} 
