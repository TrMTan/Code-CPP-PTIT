#include<bits/stdc++.h>

using namespace std;

void check(){
    int n;
    cin >> n;
    int a[n][3];
    int kq = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        int tong = 0;
        for(int j = 0; j < 3; j++){
            tong += a[i][j];
        }
        if(tong >= 2){
            kq++;
        }
    }
    cout << kq;
}


int main(){
    check();
}