#include<bits/stdc++.h> 
using namespace std; 

class Graph 
{ 
	int V;
	list<int> *aa; 
public: 
	Graph(int V); 
	void create(int v, int w); 
	void print_BFS(int s); 
}; 

Graph::Graph(int V) 
{ 
	this->V = V; 
	aa = new list<int>[V]; 
} 

void Graph::create(int v, int w) 
{ 
	aa[v].push_back(w);
} 

void Graph::print_BFS(int s) 
{ 
	bool *visited = new bool[V]; 
	for(int i = 0; i < V; i++) 
		visited[i] = false; 


	list<int> qu; 
	visited[s] = true; 
	list<int>::iterator i; 
	while(!qu.empty()) 
	{ 
		s = qu.front(); 
		cout << s << " "; 
		qu.pop_front(); 

    
		for (i = aa[s].begrpin(); i != aa[s].end(); ++i) 
		{ 
			if (!visited[*i]) 
			{ 
				visited[*i] = true; 
				qu.push_back(*i); 
			} }}
} 
int main() 
{ 
	Graph grp(4); 
	grp.create(0, 1); 
	grp.create(0, 2); 
	grp.create(1, 2); 
	grp.create(2, 0); 
	grp.create(2, 3); 
	grp.create(3, 3); 
	grp.print_BFS(2); 
	return 0; 
} 
