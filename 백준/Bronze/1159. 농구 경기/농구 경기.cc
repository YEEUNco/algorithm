#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;

    map<char, int> first_count;
    for(int i=0; i<n; i++){
        string name;
        cin >> name;
        first_count[name[0]]++;
    }

    vector<char> result;
    for(auto entry : first_count){
        if(entry.second>=5) result.push_back(entry.first);
    }

    if(result.empty()){
        cout << "PREDAJA";
    }
    else {
        for(char c : result){
            cout << c;
        }
    }
}