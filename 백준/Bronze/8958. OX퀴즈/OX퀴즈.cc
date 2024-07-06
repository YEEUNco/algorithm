#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;

    for(int i=0; i<N; i++){
        int score = 0, total = 0;
        string temp;
        cin >> temp;
        for(char c : temp){
            if(c == 'O') score++;
            else score = 0;
            total += score;
        }
        cout << total << "\n";
    }
}