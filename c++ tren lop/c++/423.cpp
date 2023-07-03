#include<bits/stdc++.h>

using namespace std;

void check(){
    int n, k;
    cin >> n >> k;
    int dem = 0; // dem so phan tu <= k 
    int a[n];
    for(int i = 0; i < n; i++){ // xet cua so co kich thuoc d
        cin >> a[i];
        if(a[i] <= k) dem++;
    }
    int cnt = 0;
    for(int i = 0; i < dem; i++){ // xet cua so dau tien
        if(a[i] <= k){
            cnt++;  // dem cua so dau tien co bn so nho hon = k
        }
    }
    int ans = cnt;
    for(int i = dem; i < n; i++){  // xet cua so thu 2
        if(a[i - dem] <= k){
            cnt--;  // kt ptu vua loai ra
        }
        if(a[i] <= k){
            cnt++;
        }
        ans = max(ans, cnt);
    }
    cout << dem - ans << endl;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        check();
    }
}