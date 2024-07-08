#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n, m;

    cin >> n >> m;

    vector<int> baguni(n+1);
    for(int i=1; i<=n; i++){
        baguni[i] = i;
    }

    for(int i=0; i<m; i++){
        int a,b;
        cin >> a >> b;
        swap(baguni[a], baguni[b]);
    }

    for(int i=1; i<=n; i++){
        cout << baguni[i] <<" ";
    }
}