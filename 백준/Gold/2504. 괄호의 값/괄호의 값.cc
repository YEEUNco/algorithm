#include <iostream>
#include <stack>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    stack<char> st;
    char prev = 0;
    int ans = 0;
    int temp = 1;

    for(char c : s){
        if (c=='('){
            st.push('(');
            temp *= 2;
        }
        else if(c == '['){
            st.push('[');
            temp *= 3;
        }
        else if(c == ')'){
            if(st.empty() || st.top()!='('){
                cout << 0;
                return 0;
            }

            if (prev == '(') ans += temp;

            st.pop();
            temp /= 2;

        }
        else if(c==']'){
           if(st.empty() || st.top()!='['){
                cout << 0;
                return 0;
            }

            if (prev == '[') ans += temp;

            st.pop();
            temp /= 3; 

        }
        else {
            cout << 0;
            return 0;
        }
        prev = c;
    }

    if(!st.empty()){
        cout << 0;
    }
    else {
        cout << ans;
    }

}