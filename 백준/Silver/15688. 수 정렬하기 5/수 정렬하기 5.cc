#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    priority_queue<int,vector<int>,greater<int>> pq;

    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        pq.push(temp);
    }

    while(!pq.empty()){
        cout << pq.top() << "\n";
        pq.pop();
    }
}