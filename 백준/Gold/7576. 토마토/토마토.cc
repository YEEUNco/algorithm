#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int m,n;
    cin >> m >> n;
    vector<vector<int>> a(n, vector<int>(m));
    for(int y=0; y<n; y++){
        for(int x=0; x<m; x++){
            cin >> a[y][x];
        }
    }

    vector<vector<int>> dist(n, vector<int>(m,-1));
    queue<pair<int,int>> q;
    for(int y = 0; y<n; y++){
        for(int x = 0; x<m; x++){
            if(a[y][x]==1){
                dist[y][x] = 0;
                q.push({y,x});
            }
        }
    }

    int dy[4] = {1, 0, -1, 0};
    int dx[4] = {0, 1, 0, -1};

    int ans = 0;
    while(!q.empty()){
        int y = q.front().first;
        int x = q.front().second;
        q.pop();

        for(int d=0; d<4; d++){
            int ny = y+dy[d];
            int nx = x+dx[d];
            if(ny<0 || ny>=n || nx<0 || nx>=m) continue;
            if(a[ny][nx]==-1) continue;
            if(dist[ny][nx] != -1) continue;

            dist[ny][nx] = dist[y][x] + 1;
            ans = max(ans, dist[ny][nx]);
            q.push({ny, nx});
        }
    }

    for(int y=0; y<n; y++){
        for(int x=0; x<m; x++){
            if(a[y][x] == 0 && dist[y][x]==-1){
                cout << -1 << "\n";
                return 0;
            }
        }
    }
    cout << ans << "\n";
    return 0;
}