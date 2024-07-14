#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    int result = a*b*c;
    string str = to_string(result);

    vector<int> num(10,0);

    for(char st : str){
        num[st-'0']++;
    }

    for(int n : num){
        cout << n << "\n";
    }
    
}