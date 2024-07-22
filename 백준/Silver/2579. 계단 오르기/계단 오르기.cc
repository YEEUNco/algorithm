#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> scores(n);
    for(int i=0; i<n; i++){
        cin >> scores[i];
    }

    vector<int> dp(n);
    dp[0]=scores[0];
    if(n>1) dp[1] = scores[0]+scores[1];
    if(n>2) dp[2] = max(scores[0], scores[1])+scores[2];
    for(int i=3; i<n; i++){
        dp[i] = max(dp[i-2], dp[i-3]+scores[i-1])+scores[i];
    }
    cout << dp[n-1];
}