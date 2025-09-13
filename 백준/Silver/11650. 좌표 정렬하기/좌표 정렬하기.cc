#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;
bool func(pair<int, int> a, pair<int, int> b){
    if(a.first==b.first){
        return a.second < b.second;
    }
    return a.first < b.first;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<pair<int, int>> book;
    pair<int, int> mypair;
    for(int i=0; i<n; i++){
        int x, y;
        cin >> x >> y;
        mypair = {x,y};
        book.push_back(mypair);
    }

    sort(book.begin(), book.end(), func);
    for(int i=0; i<n; i++){
        cout << book[i].first << " " << book[i].second << "\n";
    }
}