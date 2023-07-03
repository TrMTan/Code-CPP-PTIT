#include<bits/stdc++.h>

using namespace std;

long long lcm(long long a, long long b){
    while(b != 0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

long long gcd(long long a, long long b){
    return a * b / lcm(a, b);
}

void check(){
    long long a, b;
    cin >> a >> b;
    cout << gcd(a, b) << " " << lcm(a, b) << endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        check();
    }
}
