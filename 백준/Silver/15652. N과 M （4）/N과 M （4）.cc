#include <iostream>
#include <vector>

using namespace std;

void func(vector<int> &ans, vector<bool> &used, int k, int n, int m, int max){
    if(k==m){
        for(int i=0; i<m; i++){
            cout << ans[i] << " ";
        }
        cout << "\n";
        return;
    }
    int temp;
    for(int i=1; i<=n; i++){
        if(max <= i){
            ans[k] = i;
            temp = max;
            max = i;
            func(ans, used, k+1,n, m, max );
        } 
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    vector<int> ans(m);
    vector<bool> used(n+1, false);

    func(ans, used, 0, n, m, 0);
    
}