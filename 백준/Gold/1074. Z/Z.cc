#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int func(int n, int r, int c){
    if (n==0) return 0;

    int half = 1 << (n-1);
    int area = half * half;

    if(r<half && c < half){
        return func(n-1, r, c);
    }
    else if(r < half && c >= half){
        return area + func(n-1, r, c-half);
    }
    else if(r >= half && c < half){
        return area*2 + func(n-1, r-half, c);
    }
    return area*3 + func(n-1, r-half, c-half);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, r, c;
    cin >> n >> r >> c;

    cout << func(n, r, c);
}