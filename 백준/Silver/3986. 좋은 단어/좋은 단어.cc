#include <iostream>
#include <stack>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int cnt=0;
    for (int i=0; i<n; i++){
        stack<char> s;

        string str;
        cin >> str;
        for (char c : str){
            if (s.empty()) s.push(c);
            else {
                if(s.top()==c) s.pop();
                else s.push(c);
            }
        }
        if(s.empty()) cnt++;
    }
    cout << cnt <<"\n";
}