#include <iostream>

using namespace std;

int get_num(int n){
    int a,b;

    a = n/10;
    b = n%10;

    return b*10+((a+b)%10);
}

int main(){
    int n, new_n;
    int count = 1;

    cin >> n;
    new_n = n;

    while(n != (new_n = get_num(new_n)))
        count++;

    cout << count;
}