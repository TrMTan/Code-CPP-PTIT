#include<bits/stdc++.h>

using namespace std;

set<string> kt(string s){
    stringstream ss(s);
    string token;
    set<string> se;
    while(ss >> token){
        se.insert(token);
    }
    return se;
}

void check(){
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    set<string> se1 = kt(s1);
    set<string> se2 = kt(s2);
    for(string x : se1){
        if(se2.find(x) == se2.end()){
            cout << x << " ";
        }
    }
    cout << endl;
}


int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        check();
    }
}   