#include<bits/stdc++.h>

using namespace std;

class SinhVien{
    private:
        string msv, ht, lop, email;
    public:
        string getMsv(){
            return this->msv;
        }

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

bool cmp(SinhVien a, SinhVien b){
    return a.getMsv() < b.getMsv();
}

int main(){
    SinhVien a[1000];
    int n = 0;
    while(cin >> a[n]) n++;
    sort(a, a + n, cmp);
    for(int i = 0; i < n; i++){
        cout << a[i];
    }
}

