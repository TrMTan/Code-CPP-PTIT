#include<bits/stdc++.h>

using namespace std;

void check(){
    long long x, y, p;
    cin >> x >> y >> p;
    long long kq = 1;
    for(int i = 1; i <= y; i++){
        kq = (kq * x) % p;
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