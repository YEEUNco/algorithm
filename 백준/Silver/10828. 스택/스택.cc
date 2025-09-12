#include <iostream>
#include <stack>

using namespace std;

int main(void){
    int size;
    cin >> size;

    stack<int> s1;

    for(int i=0; i<size; i++){
        string str;
        cin >> str;
        if(str == "push"){
            int num;
            cin >> num;
            s1.push(num);
        }
        else if(str == "pop"){
            if(s1.empty()) cout << "-1\n";
            else{
                cout << s1.top() <<"\n";
                s1.pop();
            }
        }
        else if(str == "size"){
            cout << s1.size()<<"\n";
        }
        else if(str == "top"){
            if(s1.empty()) cout << "-1\n";
            else
                cout << s1.top() <<"\n";
        }
        else {
            if(s1.empty()) cout << "1\n";
            else cout << "0\n";
        }
    }
}