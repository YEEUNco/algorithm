#include <iostream>

using namespace std;

int main(){
    int time;
    cin >> time;
 
    int a = time/300;
    if(a>0)
        time = time%300;
    int b = time/60;
    if(b>0)
        time = time%60;
    
    int c = time/10;
    
    if(time%10==0) cout << a <<" " << b <<" " <<c;
    else cout << -1;
}