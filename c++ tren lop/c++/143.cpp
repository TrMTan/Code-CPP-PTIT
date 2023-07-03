#include<bits/stdc++.h>

using namespace std;

long long fb[100];

long long fibonacci(int n){
    fb[1] = 1;
    fb[2] = 1;
    for(int i = 3; i <= n; i++){
        fb[i] = fb[i - 1] + fb[i - 2];
    }
    return fb[n];
}

void check(){
    int n;
    cin >> n;
    cout << fibonacci(n) << endl;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        check();
    }
}