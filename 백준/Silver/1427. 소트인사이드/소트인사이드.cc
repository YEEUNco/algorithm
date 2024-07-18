#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string str;
    cin >> str;
    vector<int> for_sort;
    for(char c : str){
        for_sort.push_back(c-'0');
    }

    sort(for_sort.begin(), for_sort.end(), greater<int>());
    for(int num : for_sort){
        cout << num;
    }
}