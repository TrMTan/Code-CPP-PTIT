#include<bits/stdc++.h>

using namespace std;

int snt(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return n > 1;
}

void check(){
    int x;
    cin >> x;
    int dem = 0;
    for(int i = 1; i <= x; i++){
        if(__gcd(i, x) == 1){
            dem++;
        }
    }
    if(snt(dem)){
        cout << "1";
    }else{
        cout << "0";
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