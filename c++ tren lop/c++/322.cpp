#include<bits/stdc++.h>

using namespace std;

string tong(string a, string b){
    if(a.length() < b.length()){
        a.insert(0, b.length() - a.length(), '0');
    }
    if(b.length() < a.length()){
        b.insert(0, a.length() - b.length(), '0');
    }
    string res = "";
    int nho = 0;
    for(int i = a.length() - 1; i >= 0; i--){
        nho = (a[i] - '0') + (b[i] - '0') + nho;
        res.insert(0, 1, nho % 10 + '0');
        nho /= 10;
    }
    if(nho > 0){
        res.insert(0, 1, nho + '0');
    }
    return res; 
}

void check(){
    string a, b;
    cin >> a >> b;
    cout << tong(a, b) << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        check();
    }
}