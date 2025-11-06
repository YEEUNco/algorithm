#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> vec(n+1);
    stack<pair<int, int>> st;

    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        
        while(!st.empty() && st.top().first < temp){
            st.pop();
        }

        if(st.empty()){
            vec[i]=0;
        }
        else{
            vec[i] = st.top().second;
        }
        st.push({temp,i+1});

    }

    for(int i=0; i<n; i++){
        cout << vec[i] << " ";
    }
}