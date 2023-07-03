#include<bits/stdc++.h>

using namespace std;

void check(){
    string s;
    getline(cin, s);
    string tmp;
    stringstream ss(s);
    vector<string> v;
    while(ss >> tmp){
        v.push_back(tmp);
    }
    for(int i = v.size() - 1; i >= 0; i--){
        cout << v.at(i) << " ";
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