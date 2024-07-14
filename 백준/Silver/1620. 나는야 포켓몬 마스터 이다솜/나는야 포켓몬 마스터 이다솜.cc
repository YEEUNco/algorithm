#include <iostream>
#include <vector>
#include <unordered_map>
#include <cctype>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 
    int N, M;
    cin >> N >> M;

    unordered_map<string, int> name_to_number;
    unordered_map<int, string> number_to_name;
    string name;

    for(int i=1; i<=N; i++){
        cin >> name;
        name_to_number[name] = i;
        number_to_name[i] = name;
    }

    string str;
    for(int i=0; i<M; i++){
        cin >> str;
        if(isdigit(str[0])){
            int num = stoi(str);
            cout << number_to_name[num] <<"\n";
        }
        else {
            cout << name_to_number[str] <<"\n";
        }
    }

}