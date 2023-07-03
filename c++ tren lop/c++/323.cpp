#include<bits/stdc++.h>

using namespace std;

void check(){
    string n;
    long long m;
    cin >> n >> m;
    long long kq = 0;
    for(int i = 0; i < n.length(); i++){
        kq = (kq * 10 + n[i] - '0') % m;
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