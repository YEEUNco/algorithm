#include <iostream>
#include <queue>

using namespace std;

int main(){
    int num;
    cin >> num;
    queue<int> q;
    for(int i=0; i<num; i++){
        string str;
        cin >> str;
        if(str == "push"){
            int N;
            cin >> N;
            q.push(N);
        }
        else if(str == "pop"){
            if(q.empty()) cout <<-1 << "\n";
            else {
                cout << q.front() <<"\n";
                q.pop();
            }
        }
        else if(str == "size"){
            cout << q.size() << "\n";
        }
        else if(str == "empty"){
            if(q.empty()) cout << 1 << "\n";
            else cout << 0 << "\n";
        }
        else if(str == "front") {
            if(q.empty()) cout <<-1 << "\n";
            else {
                cout << q.front() <<"\n";
            }
        }
        else if(str=="back"){
            if(q.empty()) cout <<-1 << "\n";
            else {
                cout << q.back() <<"\n";
            }
        }
    }
}