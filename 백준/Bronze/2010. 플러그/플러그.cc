#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int total = 0;
    for(int i=0; i<n; i++){
        int num;
        cin >> num;
        total+=num;
    }

    cout << total - n + 1;
}