#include<bits/stdc++.h>

using namespace std;

int snt(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return 0;
        }
    }
    return n > 1;
}

void check(){
    int n;
    cin >> n;
    for(int i = 2; i <= sqrt(n); i++){
        if(snt(i)){
            cout << i * i << " ";
        }
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