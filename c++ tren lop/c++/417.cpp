#include<bits/stdc++.h>

using namespace std;

void check(){
    int n;
    cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        b[i] = a[i];
    }
    int r = 0, l = n - 1;
    sort(b, b + n);
    while(a[l] == b[l]) l--;
    while(a[r] == b[r]) r++;
    cout << r + 1 << " " << l + 1 << endl; 
}


int main(){
    int t;
    cin >> t;
    while(t--){
        check();
    }
}