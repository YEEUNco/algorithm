#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<long long> len(n-1);
    vector<long long> price(n);
    for(int i=0; i<n-1; i++){
        cin >> len[i];
    }
    for(int i=0; i<n; i++){
        cin >> price[i];
    }
    int min = price[0];
    long long total = price[0]*len[0];
    for(int i=1;i<n-1; i++){
        if(min>price[i]){
            min = price[i];
        }
        total+=(long long)len[i]*min;
    }
    cout << total;
}