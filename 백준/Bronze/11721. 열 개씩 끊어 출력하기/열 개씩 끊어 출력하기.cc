#include <iostream>

using namespace std;

int main(){
    string str;
    cin >> str;

    int count=0;
    for(char c : str){
        cout << c;
        count++;
        if(count%10==0) cout << "\n";
    }
}