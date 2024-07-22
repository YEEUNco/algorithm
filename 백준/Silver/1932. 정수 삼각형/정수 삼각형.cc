#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> triangle(n);
    for(int i=0; i<n; i++){
        triangle[i].resize(i+1);
        for(int k=0; k<i+1; k++) cin >> triangle[i][k];
    }

    vector<vector<int>> dp(triangle);
    for(int i=1; i<n; i++){
        for(int k=0; k<i+1; k++){
            if(k==0) dp[i][k] += dp[i-1][0];
            else if(k==i) dp[i][k] += dp[i-1][k-1];
            else dp[i][k]+=max(dp[i-1][k-1], dp[i-1][k]);
        }
    }

    int max = *max_element(dp[n-1].begin(),dp[n-1].end());
    cout << max;
    
}