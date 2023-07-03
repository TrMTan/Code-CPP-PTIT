#include<bits/stdc++.h>

using namespace std;

struct SinhVien{
    string msv, ht, lop, ns;
    float gpa;
};

string chuanhoa(string s){
    string tmp;
    string res = "";
    stringstream ss(s);
    while(ss >> tmp){
        res += toupper(tmp[0]);
        for(int i = 1; i < tmp.length(); i++){
            res += tolower(tmp[i]);
        }
        res += " ";
    }
    res.erase(res.length() - 1);
    return res;
}

bool cmp(SinhVien a, SinhVien b){
    return a.gpa > b.gpa;
}

void nhap(SinhVien a[], int n){
    for(int i = 0; i < n; i++){
        scanf("\n");
        getline(cin, a[i].ht);
        a[i].ht = chuanhoa(a[i].ht);
        getline(cin, a[i].lop);
        cin >> a[i].ns >> a[i].gpa;
        if(i < 9) a[i].msv = "B20DCCN00";
        else a[i].msv = "B20DCCN0";
        a[i].msv = a[i].msv + to_string(i + 1);
        if(a[i].ns[1] == '/') a[i].ns = "0" + a[i].ns;
        if(a[i].ns[4] == '/') a[i].ns.insert(3, "0");
    }
}

void sapxep(SinhVien a[], int n){
    sort(a, a + n, cmp);
}

void in(SinhVien a[], int n){
    for(int i = 0; i < n; i++){
        cout << a[i].msv << " " << a[i].ht << " " << a[i].lop << " " << a[i].ns << " " << fixed << setprecision(2) << a[i].gpa << endl;
    }
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}

