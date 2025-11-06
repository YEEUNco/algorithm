#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

int main(){
    string s;
    cin >> s;

    int cnt = 0;
    int prev=1;

    stack<int> st;
    for (char c : s){
        if (c == '('){
            st.push(0);
            prev = 0;
        }
        else if (c == ')' && prev == 0){ // 레이져
            st.pop();
            cnt += st.size();
            prev = 1;
        }
        else if(c==')'){
            st.pop();
            prev = 1;
            cnt+=1;            
        }

    }
    cout << cnt;
}