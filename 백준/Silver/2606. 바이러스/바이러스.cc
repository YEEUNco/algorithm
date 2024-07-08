#include <iostream>
#include <vector>

using namespace std;

void dfs(vector<vector<int>>& adj, vector<bool>& visited, int src, int& count){
    visited[src] = true;

    for(int next : adj[src]){
        if(!visited[next]) {
            count++;
            dfs(adj, visited, next, count);
        }
    }

}

int main(){
    int vertex, edge, temp;

    cin >> vertex >> edge;
    vector<vector<int>> adj(vertex+1);

    for(int i=0; i<edge; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<bool> visited(vertex+1, false);
    int count = 0;
    dfs(adj, visited, 1, count);

    cout << count;

}