// #include<bits/stdc++.h>

// using namespace std;

// void check(){
//     int n;
//     cin >> n;
//     map<int, int> mp;
//     for(int i = 0; i < n - 1; i++){
//         int x;
//         cin >> x;
//         mp[x]++;
//     }
//     for(int i = 1; i <= n; i++){
//         if(!mp[i]){
//             cout << i << endl;
//             return;
//         }
//     }
// }


// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         check();
//     }
// }

#include<bits/stdc++.h> 

using namespace std; 

int main(){ 
    int t; 
    cin >> t; 
    while(t--){ 
        int n; 
        cin >> n; 
        int a[n - 1]; 
        int sum = 0; 
        for(int i = 0; i < n - 1; i++){
            cin >> a[i];
            sum += a[i];
        }
        cout << (n + 1) * n / 2 - sum << endl; 
    } 
}