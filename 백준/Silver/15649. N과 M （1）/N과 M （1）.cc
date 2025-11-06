#include <iostream>
#include <vector>

using namespace std;

void func(vector<bool> &used, vector<int> &ans, int k, int n, int m){
    if(k==m){
        for(int i=0; i<m; i++){
            cout << ans[i]+1 << " ";
        }
        cout << "\n";
        return;
    }
    for(int i=0; i<n; i++){
        if(!used[i]){
            ans[k] = i;
            used[i] = true;
            func(used, ans, k+1, n, m);
            used[i] =false;
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    vector<bool> used(n);
    vector<int> ans(m);
    func(used, ans, 0, n, m);

}