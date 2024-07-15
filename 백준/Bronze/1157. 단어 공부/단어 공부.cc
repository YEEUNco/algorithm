#include <iostream>
#include <cctype>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int main(){
    vector<pair<char,int>> alphabet(26,make_pair('A',0));
    string str;
    cin >> str;

    for(char c: str){
        c = toupper(c);
        alphabet[c-'A'].first = c;
        alphabet[c-'A'].second++;
    }

    sort(alphabet.begin(), alphabet.end(), [](const pair<char, int>& a, const pair<char, int>& b){
        return a.second>b.second;
    });
    if(alphabet[0].second==alphabet[1].second) cout << "?";
    else cout << alphabet[0].first;
}