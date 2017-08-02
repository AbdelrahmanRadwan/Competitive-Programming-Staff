//BFS main.cpp

#include "Graph.h"
#include <stdio.h>
#include <queue>
#include <stack>

#define NOT_REACHABLE 1e9
#define UNDEFINED -1

void bfsRegular(int source)
{
	int V = graph.n();
	queue<int> q;
	q.push(source);
	visited[source] = true;

	while (!q.empty())
	{
		int cur = q.front();
		q.pop();

		vector<int> neighbours = graph.getNeighbours(cur);

		for (int i = 0; i < neighbours.size(); i++)
		{
			int next = neighbours[i];
			if (visited[next] == false)
			{
				visited[next] = true;
				q.push(next);
			}
		}
	}
}

vector<int> parent;
int bfsShortestPath(Graph& graph, int source, int destination)
{
	int V = graph.n();
	vector<int> dist(V, NOT_REACHABLE); //Distance array of size V and filled with infinity values.
	vector<bool> visited(V, false); //Visited array to mark the visited nodes.
	parent.assign(V, UNDEFINED);

	queue<int> q;
	dist[source] = 0;
	visited[source] = true;
	q.push(source);

	while (!q.empty())
	{
		int cur = q.front();
		q.pop();

		if (cur == destination)
			break;

		vector<int> neighbours = graph.getNeighbours(cur);

		for (int i = 0; i < neighbours.size(); i++)
		{
			int next = neighbours[i];

			if (visited[next] == false)
			{
				visited[next] = true;
				dist[next] = dist[cur] + 1;
				q.push(next);
				parent[next] = cur;
			}
		}
	}

	if (dist[destination] != NOT_REACHABLE)
	{
		stack<int> path;

		int cur = destination; 
		while (cur != UNDEFINED)
		{
			path.push(cur);
			cur = parent[cur];
		}

		cout << "The shortest path is: ";

		while (!path.empty())
		{
			cout << path.top() << ' ';
			path.pop();
		}

		cout << endl;
	}

	return dist[destination];
}

int main()
{
	//freopen("in.txt", "r", stdin);

	int n, m; cin >> n >> m;
	Graph graph(n);

	for (int i = 0; i < m; i++)
	{
		int v1, v2; cin >> v1 >> v2;
		graph.setEdge(v1, v2);
	}

	int shortestDist = bfsShortestPath(graph, 0, 2);

	cout << "The shortest distance is: " << shortestDist << endl;
}

/*Graph graph;
vector<bool> visited;

int bfs(int source, int destination)
{
	int V = graph.n();

	vector<int> dist(V, NOT_REACHABLE);
	queue<int> q;
	q.push(source);
	visited[source] = true;
	dist[source] = 0;

	while (!q.empty())
	{
		int cur = q.front();
		q.pop();

		if (cur == destination)
			break;

		vector<int> neighbours = graph.getNeighbours(cur);

		for (int i = 0; i < neighbours.size(); i++)
		{
			int next = neighbours[i];
			if (visited[next] == false)
			{
				visited[next] = true;
				q.push(next);
				dist[next] = dist[cur] + 1;
			}
		}
	}

	return dist[destination];
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

	int shortestDist = bfs(4, 3);

	cout << shortestDist << endl;
}*/