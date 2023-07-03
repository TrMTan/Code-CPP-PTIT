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

void check()
{
    int a, b;
    cin >> a >> b;
    if(a > b){
        swap(a, b);
    }
    for(int i = a; i <= b; i++){
        if(snt(i)){
            cout << i << " ";
        }
    }
}


int main(){
    check();
}