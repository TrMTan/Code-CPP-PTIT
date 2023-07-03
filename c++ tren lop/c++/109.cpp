#include <bits/stdc++.h>

using namespace std;

bool kt(int n){
    int chan = 0, le = 0;
    while(n > 0){
        int x = n % 10;
        if(x % 2 == 0){
            chan++;
        }else{
            le++;
        }
        n /= 10;
    }
    return chan == le;
}

int main(){
    int n;
    cin >> n;
    int dem = 0;
    int l = pow(10, n - 1);
    int r = pow(10, n) - 1;
    for(int i = l; i <= r; i++){
        if(kt(i)){
            cout << i << " ";
            dem++;
        }
        if(dem == 10){
            cout << endl;
            dem = 0;
        }
    }    
}