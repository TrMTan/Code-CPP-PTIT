#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int check = 1;
    while(cin >> s){
        for(int i = 0; i < s.length(); i++){
            s[i] = tolower(s[i]);
        }
        if(check == 1){
            s[0] = toupper(s[0]);
            check = 0;
        }
        if(s[s.length() - 1] == '.' || s[s.length() - 1] == '!' || s[s.length() - 1] == '?'){
            s.erase(s.end() - 1);
            cout << s << endl;
            check = 1;
        }
        else cout << s << " ";
    }
}
