#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main(){
    int test_case;
    cin >> test_case;

    for(int i=0; i<test_case; i++){
        int stu_num, score_temp, total=0, count = 0;
        float avg, avg_st;
        vector<int> score;
        cin >> stu_num;
        for(int k=0; k<stu_num; k++){
            cin >> score_temp;
            total += score_temp;
            score.push_back(score_temp);
        }
        avg = static_cast<float>(total) / stu_num;
        for(int k=0; k<stu_num; k++){
            if(score[k]>avg) count++;
        }
        avg_st = static_cast<float>(count) / stu_num * 100;
        cout << fixed << setprecision(3) << avg_st << "%\n";
    }
}