#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

bool func(pair<int, int> a, pair<int, int>b){
    if(a.second == b.second)
        return a.first < b.first;
    return a.second < b.second;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<pair<int, int>> v;
    pair<int, int> p;
    for(int i=0; i<n; i++){
        int x, y;
        cin >> x >> y;

        p = {x, y};

        v.push_back(p);
    }

    sort(v.begin(), v.end(), func);
    for(int i=0; i<n; i++){
        cout << v[i].first << " " << v[i].second << "\n";
    }
}