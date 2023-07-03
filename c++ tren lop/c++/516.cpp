#include<bits/stdc++.h>

using namespace std;

struct MatHang{
    int ma;
    string ten, loai;
    float mua, ban, lai;
};

void nhap(MatHang a[], int n){
    for(int i = 0; i < n; i++){
        cin.ignore();
        getline(cin, a[i].ten);
        getline(cin, a[i].loai);
        cin >> a[i].mua >> a[i].ban;
        a[i].ma = i + 1;
        a[i].lai = a[i].ban - a[i].mua;
    }
}

bool cmp(MatHang a, MatHang b){
    return a.lai > b.lai;
}

void sapxep(MatHang a[], int n){
    return sort(a, a + n, cmp);
}

void in(MatHang a[], int n){
    for(int i = 0; i < n; i++){
        cout << a[i].ma << " " << a[i].ten <<  " " << a[i].loai << " " << fixed << setprecision(2) << a[i].lai << endl;
    }
}

int main(){
    int n; cin >> n;
    MatHang a[n];
    nhap(a, n);
    sapxep(a, n);
    in(a, n);
    return 0;
}

