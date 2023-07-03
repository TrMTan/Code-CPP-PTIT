#include<bits/stdc++.h>

using namespace std;

bool cmp(int a, int b){
    return a > b;
}

void check(){
    int n;
    string s;
    cin >> n >> s;
    string res = "";
    for(char x : s){
        if(x == '4'){
            res += "322";
        }
        else if(x == '6'){
            res += "35";
        }else if(x == '8'){
            res += "7222";
        }else if(x == '9'){
            res += "7332";
        }else if(x != '0' && x != '1') res += x;    
    }
    sort(res.begin(), res.end(), cmp);
    cout << res << endl;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        check();
    }
}