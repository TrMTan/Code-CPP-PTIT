#include<bits/stdc++.h>

using namespace std;

void check(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    if(n == 1){
        cout << a[0] << endl;
    }
    cout << a[0] * a[1] << " ";
    for(int i = 1; i < n - 1; i++){
        cout << a[i - 1] * a[i + 1] << " ";
    }
    cout << a[n - 1] * a[n - 2] << endl;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        check();
    }
}