#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(){
    string str;
    getline(cin,str);

    istringstream iss(str);
    string word;
    int count=0;

    while(iss >> word) count++;
    
    cout << count;
}