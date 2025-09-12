#include <iostream>
#include <stack>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    while(true){
        if(!getline(cin, str)) break;
        if(str==".") break;


        bool flag = true;
        stack<char> s; 
        
        for (char c : str){
            if (c=='('){
                s.push('(');
            }
            else if(c=='['){
                s.push('[');
            }
            else if(c==')'){
                if (s.empty() || s.top() != '(') { flag = false; break; } 
                s.pop();
            }
            else if(c==']'){
                if (s.empty() || s.top() != '[') { flag = false; break; } 
                s.pop();
            }
        }

        if(flag && s.empty()) cout << "yes\n";
        else cout << "no\n";

    }
    
}