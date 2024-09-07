#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;

    if(n==1){
        cout << 3 <<"\n";
        return 0;
    }

    vector<int> dp(n,0);
    dp[0] = 3;
    dp[1] = 7;

    for(int i=2; i<n; i++){
        dp[i] = 2*dp[i-1]+dp[i-2];
        dp[i]%=9901;
    }

    cout << dp[n-1] <<"\n";
}