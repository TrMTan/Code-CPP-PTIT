#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, k, b;
    cin >> n >> k >> b;
    int a[100001] = {0};
    for(int i = 0; i < b; i++){
        int x;
        cin >> x;
        a[x] = 1; // danh dau vi tri den hong
    }
    int dem = 0;
    // xet cua so co kich thuoc k
    for(int i = 1; i <= k; i++){
        if(a[i] == 1){
            dem++; // tim so den de sua
        }
    }
    int kq = dem;
    // xet cua so tiep theo
    for(int i = k + 1; i <= n; i++){
        dem = dem - a[i - k] + a[i];
        kq = min(kq, dem); 
    }
    cout << kq << endl;   
}