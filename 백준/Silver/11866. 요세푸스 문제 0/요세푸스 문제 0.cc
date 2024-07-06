#include <iostream>
#include <deque>

using namespace std;

int main(){
    int n, kth;

    cin >> n >> kth;

    deque<int> dq;

    for(int i=1; i<=n; i++){
        dq.push_back(i);
    }
    cout <<"<";
    while(!dq.empty()){
        for(int i=1; i<kth; i++){
            dq.push_back(dq.front());
            dq.pop_front();
        }
        cout << dq.front();
        dq.pop_front();
        if(dq.size()!=0) cout <<", ";
    }
    cout << ">";
}