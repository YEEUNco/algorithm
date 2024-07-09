#include <iostream>
#include <vector>

using namespace std;

void dfs(vector<int>& doldari, vector<bool>& visited, int& count, int v, int n){
    visited[v] = true;

    int left = v-doldari[v];
    int right = v+doldari[v];

    if(left>=1 && !visited[left]){
        count++;
        dfs(doldari, visited, count, left, n);

    }
    if(right<=n && !visited[right]){
        count++;
        dfs(doldari, visited, count, right, n);
    }

}

int main(){
    int n;
    cin >> n;
    vector<int> doldari(n+1);
    vector<bool> visited(n+1, false);

    for(int i=1; i<=n; i++){
        cin >> doldari[i];
    }
    int start;
    cin >> start;

    int count = 1;
    dfs(doldari, visited, count,start,n);

    cout << count;
}