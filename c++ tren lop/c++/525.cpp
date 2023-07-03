#include<bits/stdc++.h>

using namespace std;

struct SinhVien{
    string msv, ht, lop;
    float d1, d2, d3;
};

bool cmp(SinhVien a, SinhVien b){
    return a.ht < b.ht;
}

void nhap(SinhVien &a){
    cin.ignore();
    getline(cin, a.msv);
    getline(cin, a.ht);
    getline(cin, a.lop);
    cin >> a.d1 >> a.d2 >> a.d3;
}

void sapxep(SinhVien a[], int n){
    sort(a, a + n, cmp);
}

void in(SinhVien a[], int n){
    for(int i = 0; i < n; i++){
        cout << i + 1 << " "<< a[i].msv << " " << a[i].ht << " " << a[i].lop << " ";
        cout << fixed << setprecision(1) << a[i].d1 << " " << a[i].d2 << " " << a[i].d3 << endl; 
    }
}    
int main(){
    int n;
    cin >> n;
    SinhVien a[n];
    for(int i = 0; i < n; i++){
        nhap(a[i]);
    }
    sapxep(a, n);
    in(a, n);
    return 0;
}


