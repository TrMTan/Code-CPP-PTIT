#include<bits/stdc++.h>

using namespace std;

void check(){
    string s;
    cin >> s;
    map<char, int> mp;
    int dem = 0;
    char max;
    for(int i = 0; i < s.length(); i++){
        mp[s[i]]++;
        if(mp[s[i]] > dem){
            max = s[i];
            dem =  mp[s[i]];
        }
    }
    if(mp[max] - 1 > s.length() - mp[max]){
        cout << "0";
    }else{
        cout << "1";
    }
    cout << endl;    
}


int main(){
    int t;
    cin >> t;
    while(t--){
        check();
    }
}