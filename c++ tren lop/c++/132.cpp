#include <bits/stdc++.h>

using namespace std;

void usntln(){
    long long n;
    cin >> n;
    for(long long i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            while(n % i == 0){
                n /= i;
            }
        }
        if(n == 1){
            cout << i;
        }
    }
    if(n != 1){
        cout << n;
    }
    cout << endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        usntln();
    }
}