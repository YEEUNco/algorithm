#include <iostream>

using namespace std;

int main(){
    int N, busStop;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> busStop;
        int pas = 0;
        for(int k = 0; k < busStop; k++){
            pas = pas * 2 + 1;
        }
        cout << pas << "\n";
    }
    return 0;
}