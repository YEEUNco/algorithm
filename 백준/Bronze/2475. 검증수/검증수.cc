#include <iostream>

using namespace std;

int main(){
    int total=0,temp;

    for(int i=0; i<5; i++){
        cin >> temp;
        temp *= temp;
        total += temp;
    }
    cout << total%10 <<"\n";

}