#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> g(n+1);
    for(int i=0; i<m; i++){
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    vector<int> vis(n+1,0);
    int cnt = 0;
    
    for(int i=1; i<=n; i++){
        if(vis[i]) continue;
        cnt++;
        queue<int> q;
        vis[i] = 1;
        q.push(i);
        while(!q.empty()){
            int u = q.front();
            q.pop();
            for(int v:g[u]){
                if(vis[v]) continue;
                vis[v]=1;
                q.push(v);
            }
        }
    }
    cout << cnt << "\n";
}