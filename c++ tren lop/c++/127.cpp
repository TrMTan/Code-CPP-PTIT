#include<bits/stdc++.h>

using namespace std;

bool snt(long long n){
    if(n <= 3) return n > 1;
    else if(n % 2 == 0 || n % 3 == 0) return false;
    int i = 5;
    while(i * i <= n){
        if(n % i == 0 || n % (i + 2) == 0){
            return false;
        }
        i += 6;
    }
    return true;
}

void check()
{
    int n;
    cin >> n;
    for(int i = 2; i <= n / 2; i++){
        if(snt(i) && snt(n - i)){
            cout << i << " " << n - i << endl;
            return;
        }
    }
    cout << "-1" << endl;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        check();
    }
}