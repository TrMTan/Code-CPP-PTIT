#include<bits/stdc++.h>

using namespace std;

string chuanhoa(string s){
    s[0] = toupper(s[0]);
    for(int i = 1; i < s.length(); i++){
        s[i] = tolower(s[i]);
    }
    return s;
}

string viethoa(string s){
    for(int i = 0; i < s.length(); i++){
        s[i] = toupper(s[i]);
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
        v.push_back(chuanhoa(tmp));
    }
    for(int i = 0; i < v.size() - 1; i++){
        cout << v[i];
        if(i == v.size() - 2) cout << ", ";
        else cout << " ";
    }
    cout << viethoa(v[v.size() - 1]);
}


int main(){
    check();
}