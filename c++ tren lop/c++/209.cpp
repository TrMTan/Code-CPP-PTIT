#include<bits/stdc++.h>

using namespace std;

void check(){
    int n, q;
    cin >> n >> q;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    while(q--){
        int tong = 0;
        int l, r;
        cin >> l >> r;
        for(int i = l - 1; i < r; i++){
            tong += a[i];
        }
        cout << tong << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        check();
    }
}