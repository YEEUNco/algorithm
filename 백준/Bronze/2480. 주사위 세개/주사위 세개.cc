/*
흠..
1. 입력 받는다
2. 비교해서 case1,2,3을 나눔
비교는 classic하게 가자
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int num[3], count = 0;
    bool flag[3]={false};
    cin >> num[0] >> num[1] >> num[2];

    if(num[0] == num[1]) {
        count++;
        flag[0] = true;
    }
    if(num[1] == num[2]) {
        count++;
        flag[1] = true;
    }
    if(num[0] == num[2]){
        count++;
        flag[2] = true;
    } 

    if(count == 0){
        sort(num,num+3);
        cout << num[2]*100;
    }
    else if(count == 1){
        for(int i=0; i<3; i++){
            if(flag[i] == true) cout << 1000+num[i]*100;
        }
    }
    else {
        cout << 10000+num[0]*1000;
    }

}