#include <iostream>

using namespace std;

int main(){
    int get,count=0;
    cin >> get;
    get = 1000-get;

    while(get!=0){
        get -= 500;
        if(get<0) {
            get+=500;
            break;
        }
        else count++;
    }
    while(get != 0){
        get -= 100;
        if(get < 0){
            get+=100;
            break;
        }
        else count++;
    }
    while(get != 0){
        get -= 50;
        if(get < 0){
            get+=50;
            break;
        }
        else count++;
    }
    while(get != 0){
        get -= 10;
        if(get < 0){
            get+=10;
            break;
        }
        else count++;
    }
    while(get != 0){
        get -= 5;
        if(get < 0){
            get+=5;
            break;
        }
        else count++;
    }
    while(get != 0){
        get -= 1;
        if(get < 0){
            get+=1;
            break;
        }
        else count++;
    }

    cout << count;

}