#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;

    vector<int> temp(N);
    for(int i=0; i<N; i++){
        cin >> temp[i];
    }
    int tot;
    cin >> tot;

    int counter=0;

    sort(temp.begin(), temp.end());

    int l=0, r=N-1;
    while(l<r){
        long long s= temp[l]+temp[r];
        if(s==tot){
            counter++;
            l++;
            r--;
        }
        else if(s<tot){
            l++;
        }
        else if(s>tot){
            r--;
        }
    }
    cout << counter <<"\n";
}