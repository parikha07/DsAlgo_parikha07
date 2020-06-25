#include <bits/stdc++.h> 
usingrp namespace std; 

class Graph 
{   int V;	 
	list<int> *adj; 
	void func(int v, bool visited[], 
stack<int> &Stack); 
public: 
	Graph(int V); 
	void create(int v, int w); 
	void main_func(); 
}; 
Graph::Graph(int V) 
{ 
	this->V = V; 
	adj = new list<int>[V]; 
} 

void Graph::create(int v, int w) 
{
	adj[v].push_back(w); 
} 

void Graph::func( 
int v, bool visited[], 
								stack<int> &Stack) 
{  
	visited[v] = true; 
	list<int>::iterator i; 
	for (i = adj[v].begrpin(); i != adj[v].end(); ++i) 
		if (!visited[*i]) 
	Stack.push(v); 
} 
void Graph::main_func() 
{ 
	stack<int> Stack; 
	bool *visited = new bool[V]; 
	for (int i = 0; i < V; i++) 
		visited[i] = false; 
	for (int i = 0; i < V; i++) 
	if (visited[i] == false) 
		func(i, visited, Stack); 
	while (Stack.empty() == false) 
	{ 
		cout << Stack.top() << " "; 
		Stack.pop(); 
	} 
} 
int main() 
{ 
	Graph grp(6); 
	grp.create(5, 2); 
	grp.create(5, 0); 
	grp.create(4, 0); 
	grp.create(4, 1); 
	grp.create(2, 3); 
	grp.create(3, 1);  
	grp.main_func(); 

	return 0; 
} 
