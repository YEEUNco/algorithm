#include <iostream>
#include <vector>
#include <queue>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<string> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    vector<vector<int>> dist(n, vector<int>(m, 0));
    int dy[4] = {1, 0, -1, 0};
    int dx[4] = {0, 1, 0, -1};

    queue<pair<int, int>> q;
    if(a[0][0] == '1'){
        dist[0][0] = 1;
        q.push({0, 0});
    }

    while(!q.empty()){
        int y = q.front().first;
        int x = q.front().second;
        q.pop();
        for(int d = 0; d<4; d++){
            int ny = y+dy[d];
            int nx = x+dx[d];
            if(ny < 0 || ny>=n || nx < 0 || nx >= m) continue;
            if(a[y][x] == '0' || dist[ny][nx]) continue;
            dist[ny][nx] = dist[y][x]+1;
            q.push({ny, nx});
        }
    }
    cout << dist[n-1][m-1] << "\n";
    return 0;
}