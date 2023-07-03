#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    map<string, int> mp;
    mp.clear();
    while(t--){
        string s;
        getline(cin, s);
        for(int i = 0; i < s.length(); i++){
            s[i] = tolower(s[i]);
        }
        string tmp;
        stringstream ss(s);
        vector<string> v;
        string res =""; // luu kq;
        while(ss >> tmp){
            v.push_back(tmp);
        }
        res += v[v.size() - 1]; // luu phan ten
        for(int i = 0; i < v.size() - 1; i++){
            res += v[i][0];
        }
        if(mp[res] == 0){
            cout << res << "@ptit.edu.vn" << endl;
        }else{
            cout << res << mp[res] + 1 << "@ptit.edu.vn" << endl;
        }
        mp[res]++;
    }
}