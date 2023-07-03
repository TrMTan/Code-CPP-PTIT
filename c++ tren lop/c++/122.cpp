#include<bits/stdc++.h>

using namespace std;

long long bncc(long long a, long long b){
    while(b != 0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

long long ucln(long long a, long long b){
    return a * b / bncc(a, b);
}

void check(){
    int n;
    cin >> n;
    long long x = 1;
    for(long long i = 2; i <= n; i++){
        x = ucln(x, i);
    }
    cout << x << endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        check();
    }
}