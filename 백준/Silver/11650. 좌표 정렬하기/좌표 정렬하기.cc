#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

bool func(pair<int,int> a, pair<int,int> b){
    if(a.first == b.first) {
        return(a.second < b.second);
    } 
    else return (a.first < b.first);
}

int main(void){
    int k;
    cin >> k; 

    vector<pair<int, int> > v;
    pair<int, int> myPair;
    
    for(int i=0; i<k; i++){
        int num1, num2;
        cin >> num1 >> num2;
        myPair = {num1, num2};
        v.push_back(myPair);
    }
    sort(v.begin(),v.end(), func);
    for(int i=0; i<v.size(); i++) cout << v[i].first <<" "<< v[i].second << "\n";

}