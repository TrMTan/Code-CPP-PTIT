#include<bits/stdc++.h>

using namespace std;

// void check(){
//     int n, m;
//     cin >> n >> m;
//     int a[n], b[m];
//     set<int> hop;
//     set<int> giao;
//     for(int i = 0; i < n; i++){
//         cin >> a[i];
//         hop.insert(a[i]);           
//     }
//     int k = 0;
//     for(int i = 0; i < m; i++){
//         cin >> b[i];
//         hop.insert(b[i]);
//         if(n + i + 1 - hop.size() != k){
//             giao.insert(b[i]);
//             k++;
//         }
//     }
//     for(int x : hop){
//         cout << x << " ";
//     }
//     cout << endl;
//     for(int x : giao){
//         cout << x << " ";
//     }
//     cout << endl;  
// }

void check(){
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        mp[x]++;
    }
    for(int i = 0; i < m; i++){
        int x;
        cin >> x;
        mp[x]++;
    }
    for(auto x : mp){
        cout << x.first << " ";
    }
    cout << endl;
    for(auto x : mp){
        if(x.second >= 2){
            cout << x.first << " ";
        }
    }
    cout << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        check();
    }
}