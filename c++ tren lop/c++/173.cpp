#include<bits/stdc++.h>

using namespace std;

long long ucln(long long a, long long b){
    while(b != 0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

long long bcnn(long long a, long long b){
    return a * b / ucln(a, b);
}

void check(){
    long long x, y, z, n;
    cin >> x >> y >> z >> n;
    long long bc = bcnn(bcnn(x, y), z);
    long long m = (long long)pow(10, n - 1);
    if(bc >= 10 * m){
        cout << "-1";
    }else{
        cout << (long long)(m + bc - 1) / bc * bc;
    }
    cout << endl;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        check();
    }
}