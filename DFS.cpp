//DFS main.cpp

#include <iostream>
#include <vector>
#include <stack>
#include "Graph.h"

#define UNDEFINED -1

using namespace std;

Graph graph;
vector<bool> visited;
vector<int> component; //Saves the current connected component

void dfs(int cur)
{
	visited[cur] = true;
	component.push_back(cur);

	vector<int> neighbours = graph.getNeighbours(cur);

	for (int i = 0; i < neighbours.size(); i++)
	{
		int next = neighbours[i];

		if (visited[next] == false)
			dfs(next);
	}
}

int main()
{
	//freopen("in.txt", "r", stdin);

	int n, m; cin >> n >> m;
	graph = Graph(n);
	visited.assign(n, false);

	for (int i = 0; i < m; i++)
	{
		int u, v; cin >> u >> v;
		graph.setEdge(u, v);
	}

	int counter = 0;
	for (int i = 0; i < n; i++)
	{
		if (visited[i] == false)
		{
			component.clear(); //Erase any previous saved connected components
			dfs(i);
			counter++;

			//print the connected component
			cout << "Connected component " << counter << " is: ";
			for (int i = 0; i < component.size(); i++)
				cout << component[i] << ' ';

			cout << endl;
		}
	}

	cout << "The number of connected components is: " << counter << endl;
}