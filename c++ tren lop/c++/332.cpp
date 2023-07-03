#include<bits/stdc++.h>

using namespace std;

string vietthuong(string s){
    for(int i = 0; i < s.length(); i++){
        s[i] = tolower(s[i]);
    }
    return s;
}

void check(){
    string s;
    getline(cin, s);
    string tmp;
    stringstream ss(s);
    vector<string> v;
    while(ss >> tmp){
        v.push_back(vietthuong(tmp));
    }
    cout << v[v.size() - 1];
    for(int i = 0; i < v.size() - 1; i++){
        cout << v[i][0];
    }
    cout << "@ptit.edu.vn";
}


int main(){
    check();
}