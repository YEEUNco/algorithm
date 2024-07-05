#include <iostream>

using namespace std;

int main(){
    int num1, num2;
    cin >> num1 >> num2;
    int n[3];
    int result = num2*num1;
    for(int i=0; i<3; i++){
        n[i] = num2%10;
        num2/=10;
        cout << n[i]*num1 << "\n";
    }
    cout<<result;
    

}