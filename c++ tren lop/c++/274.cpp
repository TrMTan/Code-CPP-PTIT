#include<bits/stdc++.h>

using namespace std;

void check(){
    int n;
    cin >> n;
    int a[n];
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    int dem = 0;
    for(int i = 0; i < n; i++){   
        if(mp[a[i]] >= 2){
            dem++;
        }    
    }
    cout << dem << endl;    
}


int main(){
    int t;
    cin >> t;
    while(t--){
        check();
    }
}