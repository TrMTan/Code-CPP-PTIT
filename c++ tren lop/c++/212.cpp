#include<bits/stdc++.h>

using namespace std;

const int mod = 1e9 + 7;

void check(){
    int n, x;
    cin >> n >> x;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    long long kq = 0;
    long long lt = 1;
    for(int i = n - 1; i >= 0; i--){
        kq += lt * a[i];
        kq %= mod;
        lt *= x;
        lt %= mod;
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