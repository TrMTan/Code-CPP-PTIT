#include<bits/stdc++.h>

using namespace std;

string hieu(string a, string b){
    if(a.length() < b.length()){
        a.insert(0, b.length() - a.length(), '0');
    }
    if(b.length() < a.length()){
        b.insert(0, a.length() - b.length(), '0');
    }
    if(a < b){
        swap(a, b);
    }
    string res = "";
    int nho = 0;
    for(int i = a.length() - 1; i >= 0; i--){
        int tmp = (a[i] - '0') - (b[i] - '0') - nho;
        if(tmp < 0){
            nho = 1;
            tmp += 10;
        }else{
            nho = 0;
        }
        res = (char)(tmp + '0') + res;
    }
    return res; 
}

void check(){
    string a, b;
    cin >> a >> b;
    cout << hieu(a, b) << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        check();
    }
}