#include<bits/stdc++.h>

using namespace std;

void check(){
    string s;
    int k;
    cin >> s >> k;
    set<char> se;   
    for(char x : s){
        se.insert(x);
    }
    int check = 26 - se.size();
    if(check <= k){
        cout << "1" << endl;
    }else{
        cout << "0" << endl;
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