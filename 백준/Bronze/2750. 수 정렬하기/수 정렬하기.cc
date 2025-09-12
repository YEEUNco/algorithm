#include <iostream>
#include <queue>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    priority_queue<int, vector<int>, greater<int>> pq;

    for(int i=0, x; i<N; i++){
        cin >> x;
        pq.push(x);
    }

    while(!pq.empty()){
        cout << pq.top() << '\n';
        pq.pop();
    }
    return 0;
}