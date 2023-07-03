#include<bits/stdc++.h>

using namespace std;

class SinhVien{
    public:
        string msv, ht, lop, email;
        friend istream& operator >> (istream& in, SinhVien &a){
            scanf("\n");
            getline(cin, a.msv);
            getline(cin, a.ht);
            cin >> a.lop >> a.email;
            return in;
        }
        friend ostream& operator << (ostream& out, SinhVien a){
            cout << a.msv << " " << a.ht << " " << a.lop << " " << a.email << endl;
            return out;
        }
};

int main(){
    int n;
    cin >> n;
    SinhVien a[1000];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int q;
    cin >> q;
    while(q--){
        string s;
        cin >> s;
        cout << "DANH SACH SINH VIEN KHOA " << s << ":" << endl;
        for(int i = 0; i < n; i++){
            if(a[i].lop[1] == s[2] && a[i].lop[2] == s[3]){
                cout << a[i];
            }
        }
    }
}


