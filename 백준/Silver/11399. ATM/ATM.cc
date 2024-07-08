#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> time;

    for(int i=0; i<n; i++){
        int t;
        cin >> t;
        time.push_back(t);
    }
    sort(time.begin(), time.end());
    int total=0;

    vector<int> wait_time(n);
    for(int i=0; i<n; i++){
        if(i==0) wait_time[0]=time[0];
        else wait_time[i] = wait_time[i-1]+time[i];
    }

    for(int ti : wait_time){
        total+=ti;
    }

    cout << total;

}