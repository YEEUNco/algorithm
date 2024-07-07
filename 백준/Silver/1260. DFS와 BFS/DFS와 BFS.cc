#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

void DFS(int src, vector<vector<int>>& adj, vector<bool>& visited){
    visited[src] = true;
    cout << src <<" ";
    for(int next : adj[src]){
        if(!visited[next]) DFS(next, adj, visited);
    }

}

void BFS(int src, vector<vector<int>>& adj, vector<bool>& visited){
    queue<int> q;
    q.push(src);
    visited[src] =true;

    while(!q.empty()){
        int v = q.front();
        q.pop();
        cout << v <<" ";

        for(int next : adj[v]){
            if(!visited[next]){
                q.push(next);
                visited[next] = true;
            }
        }
    }

}

int main(){
    int edge, vertex, source;
    cin >> vertex >> edge >>source;

    vector<vector<int>> adj(vertex+1);
    for(int i=0; i<edge; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i = 1; i<=vertex; i++){
        sort(adj[i].begin(), adj[i].end());
    }

    vector<bool> visited(vertex+1,false);
    DFS(source, adj, visited);
    cout<<"\n";

    fill(visited.begin(), visited.end(), false);
    BFS(source, adj, visited);

}