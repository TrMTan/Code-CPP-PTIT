#include<bits/stdc++.h>

using namespace std;

long long chiadu(string a, long long M){
    long long kq = 0;
    for(int i = 0; i < a.length(); i++){
        kq = (kq * 10 + a[i] - '0') % M;
    }
    return kq;
}

long long mu(long long a, long long b, long long M){
    if(b == 0) return 1;
    if(b == 1) return a % M;
    long long t = mu(a, b/ 2, M);
    long long r = t * t % M;
    if(b % 2 == 0) return r;
    return r * a % M;
}

void check(){
    string a;
    long long b, M;
    cin >> a >> b >> M;   
    long long k = chiadu(a, M);
    cout << mu(k, b, M) << endl;

}   


int main(){
    int t;
    cin >> t;
    while(t--){
        check();
    }
}