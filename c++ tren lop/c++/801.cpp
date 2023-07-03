#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    ifstream ip;
    ofstream op;
    ip.open("PTIT.in");
    op.open("PTIT.out");
    while(!ip.eof()){
        getline(ip, s);
        op << s;
        op << endl;
    }
    ip.close();
    op.close();
}