#include<bits/stdc++.h>

using namespace std;

void check(){
    int n, x;
    cin >> n >> x; 
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    int kq = -1;
    for(int i = 0 ; i < n ; i++){
        if(a[i] == x){
            kq = 1;
            cout << kq << endl;
            return;
        }
    }
    cout << kq << endl;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        check();
    }
}