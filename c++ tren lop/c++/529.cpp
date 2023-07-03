#include<bits/stdc++.h>

using namespace std;

struct ThucTap{
    int stt;
    string msv, ht, lop, email, dn;
};

bool cmp(ThucTap a, ThucTap b){
    return a.msv < b.msv;
}

void nhap(ThucTap a[], int n){
    for(int i = 0; i < n; i++){
        a[i].stt = i + 1;
        getline(cin, a[i].msv);
        getline(cin, a[i].ht);
        getline(cin, a[i].lop);
        getline(cin, a[i].email);
        getline(cin, a[i].dn);
    }
}

void sapxep(ThucTap a[], int n){
    sort(a, a + n, cmp);
}

int main(){
    int n;
    cin >> n;
    ThucTap a[n];
    cin.ignore();
    nhap(a, n);
    sapxep(a, n);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        for(int i = 0; i < n; i++){
            if(a[i].dn == s){
                cout << a[i].stt << " " << a[i].msv << " " << a[i].ht << " " << a[i].lop << " " << a[i].email << " " << a[i].dn << endl;
            }
        }
    }
    return 0;
}


