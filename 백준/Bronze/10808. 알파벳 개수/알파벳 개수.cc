#include <iostream>
#include <vector>

using namespace std;

int main(){
    string s;
    cin >> s;

    vector<int> alph(26,0);
    for (char c : s){
        alph[c-'a']++;
    }
    for (int i=0; i<26; i++){
        cout << alph[i];
        if(i<25)
            cout << ' ';
    }
    return 0;
}
