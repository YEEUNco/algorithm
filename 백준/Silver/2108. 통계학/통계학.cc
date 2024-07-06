#include <iostream>
#include <vector>
#include <cmath>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main(){
    int N, total=0, max_fre, mid,range, num;
    double avg;
    vector<int> sto;
    unordered_map<int, int> fre;

    cin >> N;
    for(int i=0; i<N; i++){
        cin >> num;
        total += num;
        sto.push_back(num);
        fre[sto[i]]++;
    }

    sort(sto.begin(),sto.end());
    avg = round(static_cast<double>(total)/N);
    if(avg == -0) avg = 0; 
    cout << avg <<"\n";

    mid = sto[N/2];
    cout << mid << "\n";

    max_fre = 0;
    vector<int> modes;
    for(auto pair: fre){
        if(pair.second > max_fre){
            max_fre = pair.second;
            modes.clear();
            modes.push_back(pair.first);
        }
        else if(pair.second == max_fre){
            modes.push_back(pair.first);
        }
    }

    sort(modes.begin(), modes.end());
    if(modes.size()>1) cout << modes[1] << "\n";
    else cout << modes[0] << "\n";
    
    range = sto.back() - sto.front();
    cout << range << "\n";

}