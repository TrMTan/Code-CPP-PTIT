#include<bits/stdc++.h>

using namespace std;

void check(){
    int n; 
    cin >> n;
    int a[n][n];
    int b[n] = {}, c[n] = {}, s1 = 0, s2 = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
            b[i] += a[i][j];
            c[j] += a[i][j];
        }
        for(int i = 0; i < n; i++){
            s1 = max(s1, max(b[i], c[i]));
        }
    }
    for(int i = 0, j = 0; i < n && j < n;){
        int k = min(s1 - b[i], s1 - c[j]);
        a[i][j] += k;
        b[i] += k;
        c[j] += k;
        s2 += k;
        if(s1 == b[i]) i++;
        if(s1 == c[j]) j++;
    }
    cout << s2 << endl;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        check();
    }
}