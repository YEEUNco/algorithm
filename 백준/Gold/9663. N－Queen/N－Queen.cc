#include <iostream>
#include <vector>

using namespace std;

bool used1[40];
bool used2[40];
bool used3[40];

int cnt = 0;
int n;

void func(int cur){
    if(cur == n){
        cnt++;
        return;
    }

    for (int i = 0; i < n; i++) { // (cur, i)에 퀸을 놓을 예정
        if (used1[i] || used2[i+cur] || used3[cur-i+n-1]) // column이나 대각선 중에 문제가 있다면
        continue;
        used1[i] = 1;
        used2[i+cur] = 1;
        used3[cur-i+n-1] = 1;
        func(cur+1);
        used1[i] = 0;
        used2[i+cur] = 0;
        used3[cur-i+n-1] = 0;
  }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    func(0);
    cout << cnt;

}