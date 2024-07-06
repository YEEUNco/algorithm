#include <iostream>

using namespace std;

int main(){
    int n, first;
    cin >> n >> first;

    if(n<6){
        for(int i=1; i<n; i++){
            first = 1 - first;
            cout << first <<"\n";
        }
    }
    else cout << "Love is open door\n";
}