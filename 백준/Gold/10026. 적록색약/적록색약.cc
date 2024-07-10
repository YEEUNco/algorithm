#include <iostream>
#include <vector>
#include <string>

using namespace std;

const int dx[4] = {0,-1,1,0};
const int dy[4] = {-1,0,0,1};

void dfs(vector<vector<int>>& adj,vector<vector<bool>>& visited,int x, int y, int n){
    visited[x][y] = true;

    for(int i=0; i<4; i++){
        int nx = x+dx[i];
        int ny = y+dy[i];

        if(nx>=0 && nx<n && ny >=0 && ny < n && (adj[nx][ny] == adj[x][y]) && !visited[nx][ny]){
            dfs(adj, visited, nx, ny, n);
        }
    }
}

int main(){
    int n;
    cin >> n;

    vector<vector<int>> adj(n);
    vector<vector<int>> sy_adj(n);
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    vector<vector<bool>> sy_visited(n, vector<bool>(n, false));
    for(int i=0; i<n; i++){
        string temp;
        cin >> temp;
        for(char t : temp){
            if(t == 'R'){
                adj[i].push_back(0);
                sy_adj[i].push_back(0);
            }
            else if(t == 'G'){
                adj[i].push_back(1);
                sy_adj[i].push_back(0);
            }
            else if(t == 'B'){
                adj[i].push_back(2);
                sy_adj[i].push_back(1);
            }
        }
    }

    int normal=0, saekyak=0;

    for(int i=0; i<n; i++){
        for(int k=0; k<n; k++){
            if(!visited[i][k]){
                normal++;
                //dfs
                dfs(adj, visited, i, k, n);
            }
            if(!sy_visited[i][k]){
                saekyak++;
                //dfs
                dfs(sy_adj, sy_visited, i, k, n);
            }
        }
    }
    cout << normal <<" " << saekyak << "\n";
}