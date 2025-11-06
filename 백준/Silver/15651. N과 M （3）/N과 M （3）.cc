#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void func(vector<int> &ans, int k, int n, int m){
    if(m==k){
        for(int i=0; i<m; i++){
            cout << ans[i] << " ";
        }
        cout << "\n";
        return;
    }

    for(int i=1; i<=n; i++){
        ans[k] = i;
        func(ans, k+1, n, m ) ;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    vector<int> ans(m);

    func(ans, 0, n, m);
    

}