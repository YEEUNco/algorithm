#include <iostream>
#include <vector>

using namespace std;

const int dx[8] = {0, 0, 1, -1, 1, 1, -1, -1};
const int dy[8] = {1, -1, 0, 0, 1, -1, 1, -1};

void dfs(vector<vector<int>>& map, vector<vector<bool>>& visited, int x, int y, int w, int h){
    visited[x][y] = true;
    for(int i=0; i<8; i++){
        int nx = x+dx[i];
        int ny = y+dy[i];

        if(nx>=0 && ny >= 0 && nx < h && ny < w && map[nx][ny] == 1 && !visited[nx][ny]){
            dfs(map, visited, nx, ny, w, h);
        }
    }
}

int main(){
    while(1){
        int w, h;
        cin >> w >> h;
        if(w == 0 && h == 0) break;

        vector<vector<int>> map(h, vector<int>(w));
        vector<vector<bool>> visited(h, vector<bool>(w, false));
        for(int i=0; i<h; i++){
            for(int k=0; k<w; k++){
                cin >> map[i][k];
            }
        }

        int count = 0;

        for(int i=0; i<h; i++){
            for(int k=0; k<w; k++){
                if(map[i][k] == 1 && !visited[i][k]){
                    count++;
                    dfs(map, visited, i, k, w, h);
                }
            }
        }
        cout << count <<"\n";
    }


}