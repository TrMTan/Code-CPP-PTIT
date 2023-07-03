#include<bits/stdc++.h>

using namespace std;

void check(){
    string s;
    int k;
    cin >> s >> k;
    int kq = 0;
    for(int i = 0; i < s.length(); i++){
        set<char> st;
        for(int j = i; j < s.length(); j++){
            st.insert(s[j]);
            if(st.size() == k){
                kq++;
            }
            if(st.size() > k) break;
        }
    }
    cout << kq << endl;   
}


int main(){
    int t;
    cin >> t;
    while(t--){
        check();
    }
}