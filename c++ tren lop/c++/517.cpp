#include<bits/stdc++.h>

using namespace std;

struct NhanVien
{
    string mnv, ht, gt, ns, dc, mst, hd;
};

string stt(int i){
    string s = to_string(i);
    while(s.length() < 5){
        s = '0' + s;
    }
    return s;
}

void nhap(NhanVien &a){
    cin.ignore();
    getline(cin, a.ht);
    cin >> a.gt >> a.ns;
    cin.ignore();
    getline(cin, a.dc);
    cin >> a.mst >> a.hd;
}

void inds(NhanVien a[], int n){
    for(int i = 0; i < n; i++){
        cout << stt(i + 1) << " ";
        cout << a[i].ht << " " << a[i].gt << " " << a[i].ns << " " << a[i].dc << " " << a[i].mst << " " << a[i].hd << endl;
    }
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}