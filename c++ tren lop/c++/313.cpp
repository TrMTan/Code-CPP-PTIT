#include<bits/stdc++.h>

using namespace std;

void check(){
    string s, xoa;
    getline(cin ,s);
    cin >> xoa;
    string res = "";
    string tmp;
    stringstream ss(s);
    while(ss >> tmp){
        if(xoa != tmp){
            cout << tmp << " ";
        }
    }
    cout << endl;   
}


int main(){
    check();
}