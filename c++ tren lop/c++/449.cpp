#include<bits/stdc++.h>

using namespace std;

void check(){
    int n, x;
    cin >> n >> x;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    int k = -1;
    for(int i = 0; i < n; i++){
        if(binary_search(a, a + n, x + a[i])){
            k = 1;
            break;
        }
    }
    cout << k << endl;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        check();
    }
}