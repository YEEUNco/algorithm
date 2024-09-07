#include <iostream>

using namespace std;

int main(){
    int n, num;
    string str;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> num >> str;
        for(char c:str){
            for(int k = 0; k<num; k++){
                cout << c;
            }
        }
        cout << "\n";
    }
}