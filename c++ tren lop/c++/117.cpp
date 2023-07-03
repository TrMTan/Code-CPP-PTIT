#include <bits/stdc++.h>

using namespace std;

int tongchuso(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    if(sum >= 10){
        return tongchuso(sum);
    }
    return sum;
}

void check(){
    int n;
    cin >> n;
    cout << tongchuso(n) << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        check();
    }
}