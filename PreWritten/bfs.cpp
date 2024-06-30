#include <bits/stdc++.h>
using namespace std;

struct Edge{
	int u,v; //u is the "main" node, v is the node connected to u.
			   //Think of "I am standing on u, and looking at v's";
	Edge(int node, int connected): u(node), v(connected) {}
};
struct Graph{
	vector<vector<Edge>> nodes;
	vector<bool> visited;
	int n;
	Graph(int size): n(size), nodes(size), visited(n,false) {}

	void addEdge(int u, int v){
		nodes[u].emplace_back(u,v);
		nodes[v].emplace_back(v,u);
	}
	void bfs(int s_node){
		queue<int> q; q.push(s_node);
		while(!q.empty()){
			if(visited[q.front()]){
				q.pop(); continue;
			}
			int x = q.front();
			q.pop();
			visited[x] = true;
			cout<<"Visited: " <<x<<" "<<endl;
			for(auto &i: nodes[x]){
				if(!visited[i.v]){
					cout<<"Node conncted to "<< x << " : "<< i.v << " "<<endl;
					q.push(i.v);	
				}
			}
		}
	}
};

int main(){
	Graph g(4);
	g.addEdge(0,1);
	g.addEdge(0,2);
	g.addEdge(1,3);
	g.bfs(0);
	return 0;
}
