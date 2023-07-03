#include<bits/stdc++.h>

using namespace std;

int usntnn(int n){
     for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return i;
            break;
        }
    }
    return n;
}

void check(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cout << usntnn(i) << " ";
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