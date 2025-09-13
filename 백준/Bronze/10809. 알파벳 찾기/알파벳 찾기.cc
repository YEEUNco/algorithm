#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string str;
    cin >> str;
    
    vector<int> ans(26,-1);
    for (int i=0; i<str.length(); i++){
        if( ans[str[i]-'a'] == -1){
            ans[str[i]-'a'] = i;
        }
    }

    for(int i=0; i<26; i++){
        cout << ans[i] << " ";
    }
}