#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

bool compareAge(const pair<int, string>& a,const pair<int, string>& b){
    return a.first<b.first;
}

int main(){
    vector<pair<int, string>> book;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int age;
        string name;
        cin >> age >> name;
        book.push_back(make_pair(age, name));
    }
    stable_sort(book.begin(), book.end(), compareAge);

    for(auto p:book){
        cout << p.first << " " << p.second <<"\n";
    }
}