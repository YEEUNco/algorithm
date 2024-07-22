#include <iostream>
#include <vector>

using namespace std;

int main(){
    int max=0, index;
    for(int i=0; i<5; i++){
        int total = 0, score;
        for(int k=0;k<4; k++){
            cin >> score;
            total+=score;
        }
        if(max<total){
            max = total;
            index = i;
        }
    }
    cout << index+1 << " " <<max;
}