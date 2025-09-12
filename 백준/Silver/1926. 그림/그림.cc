#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n, vector<int>(m));
    for(int i=0; i<n; i++){
        for(int k=0; k<m; k++){
            cin >> a[i][k]; 
        }
    } 

    vector<vector<int>> vis(n,vector<int>(m,0));
    int cnt = 0, max_area = 0;
    int dy[4] = {1,0,-1,0};
    int dx[4] = {0,1,0,-1};

    for(int y=0; y<n; y++){
        for(int x=0; x<m; x++){
            if(a[y][x] == 1 && !vis[y][x]){
                cnt++;
                int area = 0;
                queue<pair<int, int>> q;
                vis[y][x]=1;
                q.push({y,x});
                while(!q.empty()){
                    int cy = q.front().first;
                    int cx = q.front().second;
                    q.pop();
                    area++;
                    for(int d = 0; d<4; d++){
                        int ny = cy+dy[d];
                        int nx = cx+dx[d];
                        if(ny<0||ny>=n||nx<0||nx>=m) continue;
                        if(vis[ny][nx] || a[ny][nx]==0) continue;
                        vis[ny][nx] = 1;
                        q.push({ny, nx});
                    }
                }
                if(area>max_area) max_area = area;
            }
        }
    }
    cout << cnt << "\n" << max_area << "\n";
    return 0;
}