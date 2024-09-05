#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    int id, prob, score;
    cin >> n;
    for(int i=0; i<n; i++){
        int team_num, prob_num, my_team, log_num, rank=1;
        cin >> team_num >> prob_num >> my_team >> log_num;
        vector<vector<int>> team_score(team_num, vector<int>(prob_num, 0));
        vector<int> team_log(team_num,0);
        vector<int> submit_count(team_num,0);
        vector<int> total_team_score(team_num,0);

        //제출 횟수, team 최종로그 번호, team의 문제당 점수 계산
        for(int k = 0; k<log_num; k++){
            cin >> id >> prob >> score;
            id--;
            prob--;
            submit_count[id]++;
            team_log[id] = k+1;
            team_score[id][prob] = max(team_score[id][prob], score);
        }

        //팀 당 최종 score
        for(int k = 0; k<team_num; k++){
            for(int j=0; j<prob_num; j++){
               total_team_score[k] += team_score[k][j];
            }
        }

        //순위계산
        for(int k = 0; k<team_num; k++){
            if(k == my_team-1) continue;

            if(total_team_score[k]>total_team_score[my_team-1]) 
                rank++;
            else if(total_team_score[k] == total_team_score[my_team-1]){
                if(submit_count[k]<submit_count[my_team-1]) 
                    rank++;
                else if(submit_count[k]==submit_count[my_team-1]){
                    if(team_log[k]<team_log[my_team-1]) 
                        rank++;
                }
            }
        }
        cout <<rank << "\n";
    }
}