#include <bits/stdc++.h>

using namespace std;

void usnttk(){
    long long n, k;
    cin >> n >> k;
    int dem = 0;
    int kq = -1;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            while(n % i == 0){
                dem++;
                if(dem == k){
                    kq = i;
                    break;
                }
                n /= i;
            }
        }
        if(kq > 0){
            break;
        }
    }
    if(n > 1){
        dem++;
        if(dem == k){
            kq = n;
        }
    }
    cout << kq << endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        usnttk();
    }
}

