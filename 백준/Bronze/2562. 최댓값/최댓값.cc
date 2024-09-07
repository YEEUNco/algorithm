#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<pair<int,int>> v(9);
    for(int i=0; i<9; i++){
        cin >> v[i].first;
        v[i].second = i+1;
    }
    sort(v.begin(), v.end(), greater());
    cout << v[0].first <<"\n" <<v[0].second;
}