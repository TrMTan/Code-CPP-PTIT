#include<bits/stdc++.h>

using namespace std;

void check(){
    string s;
    cin >> s;
    long long tong = 0;
    int tmp = 1;
    for(int i = s.length() - 1; i >= 0; i--){
        tong += (s[i] - '0') * tmp;
        tmp *= 2;
        tmp %= 10;
        // tong %= 10; chia lay phan tu cuoi
    }
    if(tong % 5 == 0){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}


int main(){
    int t;
    cin >> t;
    while(t--){
        check();
    }
}