#include <iostream>
#include <vector>

using namespace std;

int get(int n, vector<int> &dp)
{
    int defore_size = dp.size();
    if(dp.size() < n+1)
    {
        dp.resize(n+1);
    }
    else 
        return dp.at(n);

    for(int i = defore_size; i <= n; i++)
    {
        dp.at(i) = dp.at(i-1)+dp.at(i-2);
    }

    return dp.at(n);
}

int main()
{
    int T, N;
    cin >> T;

    vector<int> zero_dp;
    vector<int> one_dp;

    zero_dp.push_back(1);
    zero_dp.push_back(0);

    one_dp.push_back(0);
    one_dp.push_back(1);

    for(int i = 0; i < T; i++){
        cin >> N;
        cout << get(N, zero_dp) << " " << get(N, one_dp) << "\n";
    }
}