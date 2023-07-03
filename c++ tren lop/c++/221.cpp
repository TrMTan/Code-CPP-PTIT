#include<bits/stdc++.h>

using namespace std;

void check(){
    int n, m;
    cin >> n >> m;
    int a[101][101];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    int h1 = 0, h2 = n - 1, c1 = 0, c2 = m - 1;
    while(h1 < h2 && c1 < c2){
        int tmp = a[h1 + 1][c1];
        for(int i = c1; i <= c2; i++){
            int luu = a[h1][i];
            a[h1][i] = tmp;
            tmp = luu;
        }
        h1++;
        for(int i = h1; i <= h2; i++){
            int luu = a[i][c2];
            a[i][c2] = tmp;
            tmp = luu;
        }
        c2--;
        if(h1 <= h2){
            for(int i = c2; i >= c1; i--){
                int luu = a[h2][i];
                a[h2][i] = tmp;
                tmp = luu;
            }
            h2--;
        }
        if(c1 <= c2){
            for(int i = h2; i >= h1; i--){
                int luu = a[i][c1];
                a[i][c1] = tmp;
                tmp = luu;
            }
            c1++;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << a[i][j] << " ";
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