#include <iostream>
#include <vector>

using namespace std;

int cnt = 0;

void dfs(int idx, int sum, vector<int> &temp, int n, int s){
    if(idx==n){
        if(sum==s) cnt++;
        return;
    }
    dfs(idx+1, sum+temp[idx], temp, n, s);
    dfs(idx+1,sum, temp, n, s);

}

int main(){
    int n, s;
    cin >> n >> s;

    vector<int> temp(n);
    for(int i=0; i<n; i++){
        cin >> temp[i];
    }

    dfs(0, 0, temp, n, s);
    if(s==0) cnt--;
    cout << cnt;
}