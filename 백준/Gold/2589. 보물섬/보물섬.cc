#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

void BFS(vector<vector<int>> graph, int row, int col, int &max,int spx, int spy){
    vector<vector<int>> visited(row, (vector<int>(col, 0)));
    queue<pair<int, int>> q;

    int my_max = 0;

    visited[spx][spy] = 1; 
    q.push(make_pair(spx, spy));
    
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int i=0; i<4; i++){
            int nx = x+dx[i];
            int ny = y+dy[i];

            if(nx>=0 && ny>=0 && nx<row && ny<col && !visited[nx][ny] && graph[nx][ny]){
                visited[nx][ny] = visited[x][y]+1; 
                q.push(make_pair(nx,ny));
                my_max = std::max(my_max, visited[nx][ny] - 1);
            }
        }
    }
    max = std::max(my_max, max);
}

int main(){
    int row, col;
    int max = 0;
    cin >> row >> col;
    
    vector<vector<int>> graph(row, vector<int>(col));

    for(int i = 0; i<row; i++){
        for(int k=0; k<col; k++){
            char temp;
            cin >> temp;
            if(temp == 'W') graph[i][k] = 0;
            else graph[i][k] = 1;
        }
    }

    for(int i=0; i<row; i++){
        for(int k=0; k<col; k++){
            if(graph[i][k] == 1){
                BFS(graph, row, col, max, i, k);
            }
        }
    }
    cout << max;
}