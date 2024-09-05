//내려가기
/*
123
912
432

dp problems
max
dp[k][0] = map[k][0]+max(dp[k-1][0],dp[k-1][1])
dp[k][1] = map[k][1]+max(dp[k-1][0],dp[k-1][1],dp[k-1][2])
dp[k][2] = map[k][2]+max(dp[k-1][1],dp[k-1][2])
최종 결과는 max(dp[n][0],dp[n][1],dp[n][2])
*/
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int board[n][3];
    int max_dp[3], min_dp[3];
    int max_prev[3], min_prev[3];

    for(int i=0; i<n; i++)
    {
        for(int k = 0; k<3; k++)
        {
            cin >> board[i][k];
            if(i == 0)
            {
                max_dp[k] = board[i][k];
                min_dp[k] = board[i][k];
            }
        }
    }

    for(int i=1; i<n; i++)
    {
        copy(begin(max_dp), end(max_dp), begin(max_prev));
        copy(begin(min_dp), end(min_dp), begin(min_prev));
        max_dp[0] = board[i][0]+max(max_prev[0],max_prev[1]);
        max_dp[1] = board[i][1]+max(max(max_prev[0], max_prev[1]), max_prev[2]);
        max_dp[2] = board[i][2]+max(max_prev[1], max_prev[2]);

        min_dp[0] = board[i][0]+min(min_prev[0], min_prev[1]);
        min_dp[1] = board[i][1]+min(min(min_prev[0], min_prev[1]), min_prev[2]);
        min_dp[2] = board[i][2]+min(min_prev[1], min_prev[2]);
    }

    cout << max(max(max_dp[0],max_dp[1]), max_dp[2]) << " " << min(min(min_dp[0], min_dp[1]), min_dp[2]);
}