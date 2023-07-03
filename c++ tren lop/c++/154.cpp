#include<bits/stdc++.h>

using namespace std;

void check(){
    long long n, k;
    cin >> n >> k;
    long long kq = 0;
    for(int i = 1; i <= n; i++){
        kq += i % k;
    }
    if(kq == k){
        cout << "1" << endl;
    }else{
        cout << "0" << endl;
    }
}


int main(){
    int t;
    cin >> t;
    while(t--){
        check();
    }
}