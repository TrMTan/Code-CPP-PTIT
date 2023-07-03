#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    set<string> se;
    cin.ignore();
    for(int i = 0; i < n; i++){
        getline(cin ,s);
        se.insert(s);
    }
    cout << se.size() << endl;
}