#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, l;
    cin >> n >> l;

    vector<int> pipe(n);
    for(int i=0; i<n; i++){
        cin >> pipe[i];
    }
    sort(pipe.begin(), pipe.end());

    int cnt = 1;
    int cover_end = pipe[0]+l;

    for(int i=1; i<n; i++){
        if(pipe[i]>=cover_end){
            cnt++;
            cover_end = pipe[i]+l;
        }
    }

    cout << cnt << "\n";
    
}