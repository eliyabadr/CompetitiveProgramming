#include <bits/stdc++.h>
using namespace std;

struct Edge{
	int u,v; 
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
		visited[s_node] = true;
		while(!q.empty()){
			int x = q.front();
			q.pop();
			cout<<x<< " "; 
	 		for(auto &i: nodes[x]){
				if(!visited[i.v]){
					q.push(i.v);	
					visited[i.v] = true;
				}
			}
		}
	}
	void dfs(int s_node){
		visited[s_node] = true;
		cout<<s_node<<endl;
		for(auto &x : nodes[s_node]){
			if(visited[x.v] == false){
				dfs(x.v);
			}
		}
	}
	

	
};

int main(){
	Graph g(4);
	
	g.addEdge(0,1);
	g.addEdge(0,3);
	g.addEdge(3,2);
	g.bfs(0);
	return 0;
}
