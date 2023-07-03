#include<bits/stdc++.h>

using namespace std;

int a[20][20];
int check(int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(i == 1 && a[i][j] == 1){
                a[i][j] = a[i - 1][j] + 1;
            }
        }
    }
    for(int i = 0; i < n; i++){
        vector<int> v;
        for(int j = 0; j < m; j++){
            v.push_back(a[i][j]);
        }
        sort(v.begin(), v.end());
        for(int j = 0; j < v.size(); j++){
            a[i][j] = v[j];
        }
    }
    int kq = 0;
    for(int i = 0; i < n; i++){
        int w = 1;
        for(int j = m - 1; j >= 0; j--){
            int cur = a[i][j] * w;
            ++w;
            kq = max(kq, cur);
        }
    }
    return kq;
}


int main(){
    int t, n, m;
    cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> a[i][j];
            }
        }
        cout << check(n, m) << endl;
    }
}

