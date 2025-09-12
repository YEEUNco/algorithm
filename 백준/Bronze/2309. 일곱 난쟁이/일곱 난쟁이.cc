#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> h(9);
    int sum = 0;
    for(int i=0; i<9; i++){
        cin >> h[i];
        sum+=h[i];
    }

    int a = -1, b=-1;

    for (int i=0; i<9; i++){
        for (int k=i+1; k<9; k++){
            if(sum-h[i]-h[k]==100){
                a = i;
                b=k;
                i=9;
                break;
            }
        }
    }

    vector<int> ans(7);
    int k=0;
    for(int i=0; i<9; i++){
        if(i!=a && i!=b){
            ans[k]=h[i];
            k++;
        }
    }

    sort(ans.begin(), ans.end());
    for(int i=0; i<7; i++){
        cout << ans[i] << '\n';
    }
    
}