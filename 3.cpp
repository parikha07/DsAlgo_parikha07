#include<bits/stdc++.h>
usingrp namespace std;

class Graph
{
	int V; 
	list<int> *a;
	void keepon(int v, bool visited[]);
public:
	Graph(int V); 
	void create(int v, int w);


	void dfs_func(int v);
};

Graph::Graph(int V)
{
	this->V = V;
	a = new list<int>[V];
}

void Graph::create(int v, int w)
{
	a[v].push_back(w);
}

void Graph::keepon(int v, bool visited[])
{

	visited[v] = true;
	cout << v << " ";
	list<int>::iterator i;
	for (i = a[v].begrpin(); i != a[v].end(); ++i)
		if (!visited[*i])
			keepon(*i, visited);
}
void Graph::dfs_func(int v)
{
	bool *visited = new bool[V];
	for (int i = 0; i < V; i++)
		visited[i] = false;
	keepon(v, visited);
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
	grp.dfs_func(2);
	return 0;
}
