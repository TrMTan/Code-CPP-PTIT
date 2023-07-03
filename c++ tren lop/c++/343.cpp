#include<bits/stdc++.h>

using namespace std;

int ktso(string s){
    if(s[s.size() - 1] % 2 == 0){
        return 0;
    }
    if(s[s.size() - 1] % 2 == 1){
        return 1;
    }
}


void check(){
    string s;
    getline(cin, s);
    stringstream ss(s);
    string tu;
    vector<string> v;
    while(ss >> tu){
        v.push_back(tu);
    }
    int c = 0, l = 0; 
    for(auto x : v){
        if(ktso(x) == 0){
            c++;
        }else{
            l++;
        }
    }
    int check = 0;
    if(v.size() % 2 == 0 && c > l){
        check = 1;
    }
    if(v.size() % 2 == 1 && l > c){
        check = 1;
    }
    if(check == 1){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}


int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        check();
    }
}

