#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N, M, temp;
    cin >> N >> M;

    deque<int> dq;
    vector<int> targets;

    for(int i=1; i<=N; i++){
        dq.push_back(i);
    }

    for(int i=0; i<M; i++){
        cin >> temp;
        targets.push_back(temp);
    }

    int count = 0;

    for(int target : targets){
        int index = 0;

        for(int i=0; i<dq.size(); i++){
            if(dq[i] == target){
                index = i;
                break;
            }

        }

        int left = index;
        int right = dq.size()-index;

        if(left<right){
            for(int i=0; i<left; i++){
                dq.push_back(dq.front());
                dq.pop_front();
                count++;
            }
        }
        else {
            for(int i=0; i<right; i++){
                dq.push_front(dq.back());
                dq.pop_back();
                count++;
            }
        }
        dq.pop_front();
    }

    cout << count;

}