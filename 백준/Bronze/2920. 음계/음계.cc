#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> origin;
    int v;


    for(int i=0; i<8; i++){
        cin >> v;
        origin.push_back(v);
    }

    vector<int> ascending(origin);
    vector<int> descending(origin);
    
    sort(ascending.begin(), ascending.end());
    for(int i=0; i<origin.size(); i++){
        if(ascending[i] != origin[i]) break;
        if(i==origin.size()-1){
            cout <<"ascending";
            return 0;
        }
    }

    sort(descending.begin(), descending.end(),greater<int>());
    for(int i=0; i<origin.size(); i++){
        if(descending[i] != origin[i]) break;
        if(i==origin.size()-1){
            cout <<"descending";
            return 0;
        }
    }
    cout << "mixed";
    return 0;

}