#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> info(n);
    for (int i=0; i<n; i++){
        cin >> info[i];
    }
    sort(info.begin(), info.end());

    int max=0;
    int cnt=n;
    for(int i=0; i<n; i++){
        if(max<info[i]*cnt) max = info[i]*cnt;
        cnt--;
    }

    cout << max;

}