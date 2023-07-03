#include<bits/stdc++.h>

using namespace std;

void check(){
    int n, x;
    cin >> n >> x;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        if(a[i] == x){
            cout << i + 1;
            break;
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