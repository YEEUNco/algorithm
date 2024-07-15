#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;

    int count = 0;

    for(int i=0; i<n; i++){
        string str;
        cin >> str;
        vector<bool> alph(26,false);

        char index = str[0];
        count++;
        for(char c : str){
            if(alph[c-'a'] && index != c){
                count--;
                break;
            };
            if(!alph[c-'a']){
                alph[c-'a'] = true;
                index = c;
            } 
        }

    }
    cout << count;
}