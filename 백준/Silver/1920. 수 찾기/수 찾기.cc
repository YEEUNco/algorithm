#include <iostream>
#include <unordered_set>

using namespace std;

int main(){
    unordered_set<int> uset;
    int n,temp;

    cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
    
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> temp;
        uset.insert(temp);
    }

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> temp;
        if(uset.find(temp)==uset.end()) cout << 0 <<"\n";
        else cout << 1 << "\n";
    }  
}