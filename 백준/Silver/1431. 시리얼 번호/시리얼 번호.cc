#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool func(string a, string b){
    if (a.length() != b.length())
        return a.length() < b.length();
    int asum=0, bsum=0;
    for(int i=0; i<a.length(); i++){
        if(a[i]>='0' and a[i]<='9')
            asum += a[i]-'0';
        if(b[i]>='0' and b[i]<='9')
            bsum += b[i]-'0';
    }
    if(asum!=bsum)
        return asum < bsum;
    
    return a < b;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    vector<string> v;
    
    for (int i=0; i<n; i++){
        string str;
        cin >> str;
        v.push_back(str);
    }

    sort(v.begin(), v.end(), func);

    for(int i=0; i<n; i++){
        cout<<v[i] << "\n";
    }



}