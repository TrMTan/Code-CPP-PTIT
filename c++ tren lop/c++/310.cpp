#include<bits/stdc++.h>

using namespace std;

long long tongmax(string s1, string s2){
    for(int i = 0; i < s1.length(); i++){
        if(s1[i] == '5'){
            s1[i] = '6';
        }
    }
    for(int i = 0; i < s2.length(); i++){
        if(s2[i] == '5'){
            s2[i] = '6';
        }
    }
    long long a = stoll(s1);
    long long b = stoll(s2);
    return a + b;

}

long long tongmin(string s1, string s2){
    for(int i = 0; i < s1.length(); i++){
        if(s1[i] == '6'){
            s1[i] = '5';
        }
    }
    for(int i = 0; i < s2.length(); i++){
        if(s2[i] == '6'){
            s2[i] = '5';
        }
    }
    long long a = stoll(s1);
    long long b = stoll(s2);
    return a + b;

}


void check(){
    string x1, x2;
    cin >> x1 >> x2;
    cout << tongmin(x1, x2) << " " << tongmax(x1, x2) << endl;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        check();
    }
}