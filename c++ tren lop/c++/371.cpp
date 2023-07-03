#include<bits/stdc++.h>

using namespace std;

void check(){
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        s[i] = tolower(s[i]);
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y'){
            continue;
        }
        cout << "." << s[i];
    }
}


int main(){
    check();
}