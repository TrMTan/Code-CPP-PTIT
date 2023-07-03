#include<bits/stdc++.h>

using namespace std;

bool tang(string s){
    for(int i = 0; i < 4; i++){
        if(s[i] >= s[i + 1]){
            return false;
        }
    }
    return true;
}

bool bang(string s){
    for(int i = 1; i < 5; i++){
        if(s[i] != s[0]){
            return false;
        }
    }
    return true;
}

bool dep(string s){
    return(s[0] == s[1] && s[1] == s[2] && s[3] == s[4]);
}

bool locphat(string s){
    for(int i = 1; i < 5; i++){
        if(s[i] != '6' && s[i] != '8'){
            return false;
        }
    }
    return true;
}


void check(){
    string s;
    cin >> s;
    string tmp = s.substr(5, 6); // lay phan so trong bien so
    tmp.erase(3, 1); // xoa dau cham
    if(tang(tmp) || bang(tmp) || dep(tmp) || locphat(tmp)){
        cout << "YES";
    }else{
        cout << "NO";
    }
    cout << endl;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        check();
    }
}