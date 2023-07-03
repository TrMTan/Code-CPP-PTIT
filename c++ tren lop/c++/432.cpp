#include<bits/stdc++.h>

using namespace std;

bool cmp(int a, int b){
    return to_string(a) + to_string(b) > to_string(b) + to_string(a);
}

void check(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n, cmp);
    for(int i = 0; i < n; i++){
        cout << a[i];
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