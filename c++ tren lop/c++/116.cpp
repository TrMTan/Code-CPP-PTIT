#include<bits/stdc++.h>

using namespace std;

void snt(int n){
    for(int i = 2; i <= n; i++){
        if(n % i == 0){
            cout << i;
            break;
        }
    }
}

void check(){
    int n;
    cin >> n;
    cout << "1 ";
    for(int i = 2; i <= n; i++){
        snt(i);
        cout << " ";
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