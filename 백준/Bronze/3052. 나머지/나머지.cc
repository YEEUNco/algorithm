#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> quotient(42,0);
    for(int i=0; i<10; i++){
        int num;
        cin >> num;
        quotient[num%42]++;
    }
    int count=0;
    for(int quo : quotient){
        if(quo != 0) count++;
    }
    cout << count;
}