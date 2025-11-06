#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void func(vector<int> &ans, vector<bool> &used, int k, int n, int m, int start){
    if(k==m){
        for(int i=0; i<m; i++){
            cout << ans[i] << " ";
        }
        cout << "\n";
        return;
    }

    for(int i=start; i<=n; i++){
        if(!used[i] ){
            ans[k] = i;
            used[i] = true;
            func(ans, used, k+1, n, m,i+1);
            used[i] = false;
        }
    }
    
}

int main(){
    int n, m;
    cin >> n >> m;

    vector<int> ans(m);
    vector<bool> used(n+1, false);

    func(ans, used, 0, n, m, 1);
}