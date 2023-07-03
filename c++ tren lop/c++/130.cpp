#include <bits/stdc++.h>

using namespace std;

void usnt(){
    long long n;
    cin >> n;
    for(long long i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            while(n % i == 0){
                cout << i << " ";
                n /= i;
            }
        }
        if(n == 1){
            break;
        }
    }
    if(n > 1){
        cout << n;
    }
    cout << endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        usnt();
    }
}