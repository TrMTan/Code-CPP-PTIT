#include<bits/stdc++.h>

using namespace std;

long long fb[100];

void check(){
    fb[0] = 0;
    fb[1] = 1;
    for(int i = 2; i <= 92; i++){
        fb[i] = fb[i - 1] + fb[i - 2];
    }
}


int main(){
    check();
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        int check = 0;
        for(int i = 0; i <= 92; i++){
            if(fb[i] == n){
                check = 1;
                break;
            }
        }
        if(check){
            cout << "YES";
        }else{
            cout << "NO";
        }
        cout << endl;
    }
}
