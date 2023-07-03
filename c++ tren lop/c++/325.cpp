#include<bits/stdc++.h>

using namespace std;

void check(){
    string s;
    cin >> s;
    int tc = 0, tl = 0;
    for(int i = 0; i < s.length(); i++){
        if(i % 2 == 0){
            tc += s[i] - '0';
        }else{
            tl += s[i] - '0';
        }
    }
    if((tc - tl) % 11 == 0){
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