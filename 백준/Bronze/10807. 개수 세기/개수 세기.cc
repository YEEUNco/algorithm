#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, get;
    cin >> n;
    vector<int> nums(n);

    for(int i=0; i<n; i++){
        cin >> nums[i];
    }
    cin >> get;
    int count = 0;
    for(int i=0; i<n; i++){
        if(get==nums[i]) count++;
    }

    cout << count;
}