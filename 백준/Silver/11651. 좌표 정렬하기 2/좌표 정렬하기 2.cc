#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

bool func(pair<int, int> a, pair<int, int> b ){
    if(a.second == b.second){
        return a.first<b.first;
    }
    else return a.second<b.second;
}

int main(){
    int num;
    cin >> num;

    vector<pair<int,int>> v;
    pair<int, int> myPair;

    for(int i=0; i<num; i++){
        int num1, num2;
        cin >> num1 >> num2;
        myPair = {num1, num2};
        v.push_back(myPair);
    }
    sort(v.begin(), v.end(),func);
    for(int i=0; i<num; i++) 
        cout << v.at(i).first << " " << v.at(i).second << "\n";
}