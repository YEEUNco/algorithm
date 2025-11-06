#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>> n;


    for(int i=0; i<n; i++){
        stack<int> s;
        string temp;
        cin >> temp;
        bool flag = false;
        for(char c:temp){
            if(c == '('){
                s.push(1);
            }
            else if(s.empty()) {
                flag = true;
                cout << "NO\n";
                break;
            }
            else s.pop();
        }
        if (flag) continue;
        if(s.empty()) cout << "YES\n";
        else cout << "NO\n";
    }
}