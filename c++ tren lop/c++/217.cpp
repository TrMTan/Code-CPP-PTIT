#include<bits/stdc++.h>

using namespace std;

void check(){
    int n, k;
    cin >> n >> k;
    int a[n * n];
    for(int i = 0; i < n * n; i++){
        cin >> a[i];
    }
    sort(a, a + (n * n));
    cout << a[k - 1] << endl;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        check();
    }
}