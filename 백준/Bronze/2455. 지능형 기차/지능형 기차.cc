#include <iostream>

using namespace std;

int main(){
    int total=0,max=0, off, on;
    for(int i=0; i<4; i++){
        cin >> off >> on;
        total -= off;
        total += on;
        if(total > max) max = total;
    }

    cout << max;
}