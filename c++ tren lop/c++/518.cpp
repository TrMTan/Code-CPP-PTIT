#include<bits/stdc++.h>

using namespace std;

struct NhanVien{
    string mnv, ht, gt, ns, dc, mst, hd;
};

bool cmp(NhanVien a, NhanVien b){
    string s1 = a.ns, s2 = b.ns;
    int t1 = (s1[0] - '0') * 10 + (s1[1] - '0'), ng1 = (s1[3] - '0') * 10 + (s1[4] - '0'), na1 = stoi(s1.substr(6)); // substr cat tu index 6 ve cuoi
    int t2 = (s2[0] - '0') * 10 + (s2[1] - '0'), ng2 = (s2[3] - '0') * 10 + (s2[4] - '0'), na2 = stoi(s2.substr(6));
    if(na1 != na2) return na1 < na2;
    if(t1 != t2) return t1 < t2;
    return ng1 < ng2;
}

int stt = 1;

void nhap(NhanVien &a){
    if(stt < 10) a.mnv = "0000";
    else a.mnv = "000";
    a.mnv = a.mnv + to_string(stt++);
    cin.ignore();
    getline(cin, a.ht);
    cin >> a.gt >> a.ns;
    cin.ignore();
    getline(cin, a.dc);
    cin >> a.mst >> a.hd;
}

void sapxep(NhanVien a[], int n){
    sort(a, a + n, cmp);
}

void inds(NhanVien a[], int n){
    for(int i = 0; i < n; i++){
        cout << a[i]. mnv << " " << a[i].ht << " " << a[i].gt << " " << a[i].ns << " " << a[i].dc << " " << a[i].mst << " " << a[i].hd << endl;
    }
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}

