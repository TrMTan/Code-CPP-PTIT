#include<bits/stdc++.h>

using namespace std;

void check(){
    string s;
    cin >> s;
    string tmp = s;
    reverse(tmp.begin(), tmp.end());
    if(tmp == s) {
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        check();
    }
}