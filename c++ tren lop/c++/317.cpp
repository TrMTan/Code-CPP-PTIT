#include<bits/stdc++.h>

using namespace std;

bool chan(string s){
    for(int i = 0; i < s.length(); i++){
        if((s[i] - '0') % 2 != 0){
            return false;
        }
    }
    return true;
}

void check(){
    string s;
    cin >> s;
    string tmp = s;
    reverse(tmp.begin(), tmp.end());
    if(chan(s) && s == tmp){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}


int main(){
    int t;
    cin >> t;
    while(t--){
        check();
    }
}