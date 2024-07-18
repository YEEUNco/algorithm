#include <iostream>

using namespace std;

int ys(int time){
    return (time/30+1)*10; 
}

int ms(int time){
    return(time/60+1)*15;
}

int main(){
    int n;
    cin >> n;

    int Ycharge = 0, Mcharge = 0;

    for(int i=0; i<n; i++){
        int time;
        cin >> time;
        Ycharge+=ys(time);
        Mcharge+=ms(time);
    }

    if(Ycharge < Mcharge) cout << "Y " << Ycharge;
    else if(Ycharge > Mcharge) cout << "M " << Mcharge;
    else cout << "Y M " << Ycharge;
}