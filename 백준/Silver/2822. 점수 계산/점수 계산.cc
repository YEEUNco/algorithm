#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> score(8);
    for(int i=0; i<8; i++){
        cin >> score[i];
    }
    vector<int> for_index(score);

    sort(score.begin(), score.end(), greater<int>());
    int count = 0;
    vector<int> index;
    for(int i=0; i<5; i++) {
        count+=score[i];
        for(int k=0; k<8; k++){
            if(score[i]==for_index[k]) index.push_back(k+1);
        }        
    }

    sort(index.begin(), index.end());
    cout << count << "\n";
    for(int in : index){
        cout << in <<" ";
    }
    
}