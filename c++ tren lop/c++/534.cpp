#include<bits/stdc++.h>

using namespace std;

bool tn(string s){
    if(s.length() < 2) return false;
    string tmp = s;
    reverse(tmp.begin(), tmp.end());
    for(int i = 0; i < s.length(); i++){
        if(s[i] != tmp[i]){
            return false;
        }
    }
    return true;
}

bool cmp(string a, string b){
    if(a.length() != b.length()){
        return a.length() > b.length();
    }
    return a > b;
}

int main(){
    string s;
    map<string, int> mp; // luu tan suat
    set<string> se; // luu so thoa man
    vector<string> v; // luu cac so co trong se
    while(cin >> s){
        if(tn(s)){
            se.insert(s);
            mp[s]++; // luu tan xuat xuat hien cua so do
        }
    }
    for(auto it : se){
        v.push_back(it);
    }
    sort(v.begin(), v.end(), cmp);
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " " << mp[v[i]] << endl;
    }
}