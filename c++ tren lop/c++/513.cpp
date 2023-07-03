#include<bits/stdc++.h>

using namespace std;

struct SinhVien{
    string msv, ht, lop, ns;
    float gpa;
};

void nhap(SinhVien a[], int n){
    for(int i = 1; i <= n; i++){
        cin.ignore();
        getline(cin, a[i].ht);
        cin >> a[i].lop >> a[i].ns >> a[i].gpa;
        if(i < 10) a[i].msv = "B20DCCN00";
        else a[i].msv = "B20DCCN0";
        a[i].msv = a[i].msv + to_string(i);
        if(a[i].ns[1] == '/') a[i].ns = "0" + a[i].ns;
        if(a[i].ns[4] == '/') a[i].ns.insert(3, "0");
    }
}

void in(SinhVien a[], int n){
    for(int i = 1; i <= n; i++){
        cout << a[i].msv << " " << a[i].ht << " " << a[i].lop << " " << a[i].ns << " " << fixed << setprecision(2) << a[i].gpa << endl;
    }
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}

