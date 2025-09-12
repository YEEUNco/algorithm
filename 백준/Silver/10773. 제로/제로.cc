#include <iostream>
#include <stack>

using namespace std;

int main(void){
    int k, sum;
    stack<int> s;
    cin >> k;
    
    for(int i=0; i<k; i++){
        int a;
        cin >> a;
        if(a==0) s.pop();   
        else s.push(a);
    }
    int tot=0;
    int n = s.size();
    for (int i=0; i<n;i++){
        tot+=s.top();
        s.pop();
    }
    cout << tot << "\n";
}