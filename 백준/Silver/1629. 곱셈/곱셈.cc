#include <iostream>
#include <algorithm>

using namespace std;

long long modpow(long long a, long long b, long long m){
    a %= m;
    long long res = 1%m;
    while(b){
        if(b&1) res = (res*a)%m;
        a = (a*a)%m;
        b >>= 1;
    }
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a,b,m;
    cin >> a >> b >> m;
    cout << modpow(a,b,m);
}