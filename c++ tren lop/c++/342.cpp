#include<bits/stdc++.h>

using namespace std;

void check(){
    string s;
    cin >> s;
    int sum = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= '0' && s[i] <= '9') 
            sum += s[i] - '0';
    }
    string tmp = "";    
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            tmp += s[i];
        }
    }
    sort(tmp.begin(), tmp.end());
    cout << tmp << to_string(sum) << endl;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        check();
    }
}