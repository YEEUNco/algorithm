#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool func(pair<int, int>a, pair<int, int> b){
    if(a.second != b.second)
        return a.second < b.second;
    return a.first < b.first;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<pair<int, int>> mt(n);
    for(int i=0; i<n; i++){
        int s, e;
        cin >> s >> e;
        mt[i] = {s, e};

    }

    sort(mt.begin(), mt.end(), func);
    int cnt = 0;
    int last_end = 0;
    for(pair<int, int>& p:mt){
        if(p.first>= last_end){
            cnt++;
            last_end = p.second;
        }
    }
    cout << cnt << "\n";
}