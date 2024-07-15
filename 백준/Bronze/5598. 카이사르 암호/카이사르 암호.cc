#include <iostream>

using namespace std;

int main(){
    string str, newstr="";
    cin >> str;
    for(char c : str){
        if(c-3>='A') c = c-3;
        else c = 'Z'-'C'+c;
        newstr+=c;
    }
    cout << newstr;
}