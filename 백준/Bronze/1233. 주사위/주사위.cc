#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    vector<int> sums(s1 + s2 + s3 + 1, 0);

    for (int i = 1; i <= s1; ++i) {
        for (int j = 1; j <= s2; ++j) {
            for (int k = 1; k <= s3; ++k) {
                sums[i + j + k]++;
            }
        }
    }

    int max_frequency = 0;
    int most_frequent_sum = 0;
    for (int i = 3; i < sums.size(); ++i) {
        if (sums[i] > max_frequency) {
            max_frequency = sums[i];
            most_frequent_sum = i;
        }
    }

    cout << most_frequent_sum << endl;

    return 0;
}
