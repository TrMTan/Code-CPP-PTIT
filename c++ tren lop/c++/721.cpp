#include<bits/stdc++.h>

using namespace std;

void check(){
    int n;
    cin >> n;
    int a[n], b[1001];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        b[i] = 1;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            if(a[i] > a[j]){
                b[i] = max(b[i], b[j] + 1);
            }
        }
    }
    sort(b, b + n);
    cout << b[n- 1] << endl;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        check();
    }
}