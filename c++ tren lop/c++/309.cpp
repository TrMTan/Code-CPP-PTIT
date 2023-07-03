#include<bits/stdc++.h>

using namespace std;

void check(){
    string s;
    getline(cin, s);
    string tmp;
    int dem = 0;
    stringstream ss(s);
    while(ss >> tmp){
        dem++;
    }
    cout << dem << endl;
}


int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        check();
    }
}