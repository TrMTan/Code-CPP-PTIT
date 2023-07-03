#include<bits/stdc++.h>

using namespace std;

void check(){
    string a;
    long long b, c;
    cin >> a >> b >> c;
    long long kq = 0;
    for(int i = 0; i < a.size(); i++){
        kq = (kq * 10 + b * (a[i] - '0')) % c;
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