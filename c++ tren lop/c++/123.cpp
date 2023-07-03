#include<bits/stdc++.h>

using namespace std;

bool checksnt(long long n){
    if(n <= 3) return n > 1;
    else if(n % 2 == 0 || n % 3 == 0){
        return false;
    }
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
    if(checksnt(n)){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}


int main(){
   check();
}