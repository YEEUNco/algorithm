#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool func(pair<int, int> a, pair<int, int> b ){
    if(a.second != b.second){
        return a.second < b.second;
    }
    return a.first < b.first;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<pair<int, int>> timeslot(n);

    for(int i=0; i<n; i++){
        int s, e;
        cin >> s >> e;
        timeslot[i] = {s, e};
    }

    sort(timeslot.begin(), timeslot.end(), func );

    int end_time=0;
    int cnt = 0;
    for(int i=0; i<n; i++){
        if(end_time <= timeslot[i].first){
            cnt++;
            end_time = timeslot[i].second;
        }
    }

    cout << cnt;
    
}