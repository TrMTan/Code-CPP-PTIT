#include<bits/stdc++.h>

using namespace std;

// int kt(int a, int b){
//     long long x = (long long)a * a + (long long)b * b;
//     int c = sqrt(x);
//     if((long long)c * c == x) return c;
//     return 0;
// }

// void check(){
//     int n;
//     cin >> n;
//     int a[n];
//     for(int i = 0; i < n; i++){
//         cin >> a[i];
//     }
//     sort(a, a + n);
//     for(int i = 0; i + 2 < n; i++){
//         for(int j = 0; j + 1< n; j++){
//             int x = kt(a[i], a[j]);
//             if(x != 0 && binary_search(a + j + 1, a + n, x)){
//                 cout << "YES" << endl;
//                 return;
//             }
//         }
//     }
//     cout << "NO" << endl;
// }

int kt(long long a[], int n){
    for(int i = n - 1; i >= 2; i--){
        int l = 0, r = n - 1;
        while(l < r){
            if(a[l] + a[r] == a[i]) return 1;
            else if(a[l] + a[r] < a[i]) l++;
            else r--;
        }
    }
    return 0;
}

void check(){
    int n;
    cin >> n;
    long long a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        a[i] = (long long)a[i] * a[i];
    }
    sort(a, a + n);
    if(kt(a, n)) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        check();
    }
}