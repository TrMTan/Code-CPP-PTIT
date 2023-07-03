#include<bits/stdc++.h>

using namespace std;

int check(int n){
    int dem = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            int mu = 0;
            while(n % i == 0){
                mu++;
                n /= i;
            }
            if(mu >= 2){
                return 0;
            }
            if(mu == 1){
                dem++;
            }
        }
    }
    if(n != 1) dem++;
    return dem == 3;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        cout << check(n) << endl;
    }
}