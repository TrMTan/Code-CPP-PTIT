#include<bits/stdc++.h>

using namespace std;
//sd de quy
// int n, a[100], hv[100];

// void lkhv(int m){
//     int i;
//     if(m > n){
//         for(int i = 1; i <= n; i++){
//             cout << a[i];
//         }
//         cout << " ";
//         return;
//     }
//     for(int i = 1; i <= n; i++){
//         if(hv[i] == 0){
//             a[m] = i;
//             hv[i] = 1;
//             lkhv(m + 1);
//             hv[i] = 0;
//         }
//     }
// }

// void check(){
//     cin >> n;
//     lkhv(1);
//     cout << endl;
// }


// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         check();
//     }
// }

int a[100];

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i = 0; i < n; i++){
            a[i] = i + 1;
        }
        do{
            for(int i = 0; i < n; i++){
                cout << a[i];
            }
            cout << " ";
        }while (next_permutation(a, a + n));
        cout << endl;
    }
}