#include<bits/stdc++.h>

using namespace std;

void check(){
    string s;
    cin >> s;
    int check = 0;
    string tmp = s;
    reverse(tmp.begin(), tmp.end());
    if(tmp[0] == '6' && tmp[1] == '8'){
        cout << "1" << endl;
    }else{
        cout << "0" << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        check();
    }
}