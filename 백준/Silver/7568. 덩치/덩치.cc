#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> size(n);

    for(int i=0; i<n; i++){
        cin >> size[i].first >> size[i].second;
    }

    vector<int> ranks(n,1);

    for(int i=0; i<n; i++){
        for(int k=0; k<n; k++){
            if(i!=k){
                if(size[i].first<size[k].first && size[i].second<size[k].second){
                    ranks[i]++;
                }
            }
        }
    }

    for(int rank: ranks){
        cout << rank <<" ";
    }
}