#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string nums;
    cin >> nums;

    vector<int> num_count(9,0);

    for(char num : nums){
        if(num-'0' != 9)
            num_count[num-'0']++;
        else num_count[6]++;
    }

    num_count[6] = (num_count[6]+1)/2;
    sort(num_count.begin(), num_count.end(),greater<int>());
    cout << num_count[0];
}