#include<bits/stdc++.h>

using namespace std;

void check(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int tong = 1e7;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(abs(a[i] + a[j]) < abs(tong)){
                tong = a[i] + a[j];
            }
        }
    }
    cout << tong << endl;   
}


int main(){
    int t;
    cin >> t;
    while(t--){
        check();
    }
}