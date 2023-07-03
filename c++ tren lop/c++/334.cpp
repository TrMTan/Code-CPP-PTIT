#include<bits/stdc++.h>

using namespace std;

void check(){
    string s;
    cin >> s;
    int sum = 0;
    int kq = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            sum = sum * 10 + (s[i] - '0');
        }else{
            kq += sum;
            sum = 0;
        }
    }
    kq += sum;
    cout << kq << endl;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        check();
    }
}