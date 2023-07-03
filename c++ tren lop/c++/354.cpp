#include<bits/stdc++.h>

using namespace std;

void check(){
    string s;
    cin >> s;
    int dem = 1;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == s[i + 1]){
            dem++;
        }else{
            cout << s[i] << dem;
            dem = 1;
        }        
    }
    cout << endl;


}


int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        check();
    }
}
