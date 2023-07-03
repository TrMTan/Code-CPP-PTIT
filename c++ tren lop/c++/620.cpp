#include<bits/stdc++.h>

using namespace std;

class SinhVien{
    private:
        string msv, ht, lop, email;
    public:
        string getMsv(){
            return this->msv;
        }
        string getLop(){
            return this->lop;
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
    if(a.getLop() == b.getLop()){
        return a.getMsv() < b.getMsv();
    }
    return a.getLop() < b.getLop();
}

void sapxep(SinhVien a[], int n){
    sort(a, a + n, cmp);
}

int main(){
    SinhVien ds[1000];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
