#include <iostream>
#include <vector>

using namespace std;

class Graph
{
	vector< vector<int> > adjList;
public:
	Graph();
	Graph(int);
	~Graph();
	void clear();
	vector<int>& getNeighbours(int);
	int n();
	int e();
	void setEdge(int, int);
	void delEdge(int, int);
	void Clear();
};

///<summary>
///Initializes the graph with an initial number of nodes.
///</summary>
Graph::Graph(int nodesNum)
{
	adjList.resize(nodesNum);
}

Graph::~Graph()
{
	Clear();
}

///<summary>
///Gets the number of edges in the graph.
///</summary>
int Graph::e()
{
	int edgesNum = 0;

	for (int i = 0; i < adjList.size(); i++)
		edgesNum += adjList[i].size();

	return edgesNum / 2;
}

///<summary>
///Gets the number of nodes in the graph.
///</summary>
int Graph::n()
{
	return adjList.size();
}

///<summary>
///Clears the graph.
///</summary>
void Graph::Clear()
{
	adjList.clear();
}

///<summary>
///Gets the neighbours of a node.
///</summary>
vector<int>& Graph::getNeighbours(int node)
{
	return adjList[node];
}

///<summary>
///Constructs an undirected edge between v1 to v2.
///</summary>
void Graph::setEdge(int v1, int v2)
{
	adjList[v1].push_back(v2);
	adjList[v2].push_back(v1);
}

///<summary>
///Deletes an undirected edge between v1 to v2.
///</summary>
void Graph::delEdge(int v1, int v2)
{
	adjList[v1].erase(find(adjList[v1].begin(), adjList[v1].end(), v2));
	adjList[v2].erase(find(adjList[v2].begin(), adjList[v2].end(), v1));
}