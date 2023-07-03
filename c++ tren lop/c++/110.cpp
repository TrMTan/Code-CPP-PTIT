#include<bits/stdc++.h>

using namespace std;

void check(){
    string s;
    cin >> s;
    int xoa = s.find("084");
    s.erase(xoa, 3);
    cout << s << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        check();
    }
}