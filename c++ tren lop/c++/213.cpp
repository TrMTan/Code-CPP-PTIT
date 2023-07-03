#include<bits/stdc++.h>

using namespace std;

int fb(int n){
    if(n < 4) return 1;
    int a = 1, b = 1;
    while(a < n){
        int k = a + b;
        b = a;
        a = k;
    }
    if(a == n) return 1;
    else return 0;
}

void check(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        if(fb(a[i])){
            cout << a[i] << " ";
        }
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