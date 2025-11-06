#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> board;

void func(int n, int x, int y){
    if(n==1){
        board[x][y] = '*';
        return;
    }

    int div = n/3;
    for(int i=0; i<3; i++){
        for (int k=0; k<3; k++){
            if(i==1 && k==1) continue;
            func(div, x+i*div,y+k*div );
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    board.assign(n, string(n, ' '));
    func(n, 0, 0);

    for(int i=0; i<n; i++){
        cout << board[i] << "\n";
    }
    

}