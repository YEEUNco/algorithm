#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main(){
    int a, b, n;
    cin >> a >> b >> n;

    vector<int> freq(n);
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        freq[i]=abs(temp-b);
    } 
    sort(freq.begin(), freq.end());
    if(abs(b-a) > freq[0])
        cout << freq[0]+1;
    else cout << abs(b-a);
}