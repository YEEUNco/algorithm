#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
    char m[5] = {'a', 'e', 'i', 'o', 'u'};

    while(1){
        string str;
        cin >> str;
        if(str == "end") break;

        bool m_flag = false, fin = true, first = true;
        char temp = '\0';
        int m_count = 0, j_count = 0;

        for(char c : str){
            bool is_vowel = false;
            for(int i=0; i<5; i++){
                if(m[i]==c) {
                    m_count++;
                    j_count=0;
                    m_flag = true;
                    is_vowel = true;
                    break;
                }
            }
            if(!is_vowel){ 
                j_count++;
                m_count=0;
            }
            if(j_count==3 || m_count==3){
                fin = false;
                break;
            }
            if(!first){
                if(temp == c){
                    if((c=='e' && temp == 'e' ||(c=='o' && temp == 'o'))) {;}
                    else{ 
                        fin = false;
                        break;
                    }
                }
            }
            temp=c;
            first = false;
        }
        if(!m_flag) fin = false;

        if(fin) cout << "<" << str<<"> is acceptable.\n";
        else cout << "<" << str<<"> is not acceptable.\n";
    }
}