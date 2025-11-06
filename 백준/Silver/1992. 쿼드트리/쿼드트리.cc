#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> img;

void compress(int x, int y, int size){
    char first = img[x][y];
    bool same = true;

    for(int i=x; i<x+size; i++){
        for(int k=y; k<y+size; k++){
            if(img[i][k] != first){
                same = false;
                break;
            }
        }
        if(!same) break;
    }

    if(same){
        cout << first;
        return;
    }

    int half = size/2;
    cout << '(';
    compress(x, y, half);
    compress(x,y+half, half);
    compress(x+half, y, half);
    compress(x+half, y+half, half);
    cout << ')';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        img.push_back(s);
    }

    compress(0,0,n);
}