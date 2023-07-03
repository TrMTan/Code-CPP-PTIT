#include<bits/stdc++.h>

using namespace std;

class NhanVien{
    private:
        string mnv, ht, gt, ns, dc, mst, hd;
    public:
        friend istream& operator >> (istream &in, NhanVien &a){
            a.mnv = "00001";
            getline(cin, a.ht);
            cin >> a.gt >> a.ns;
            cin.ignore();
            getline(cin, a.dc);
            cin >> a.mst >> a.hd;
            return in;
        }
        friend ostream& operator << (ostream &out, NhanVien a){
            cout << a.mnv << " " << a.ht << " " << a.gt << " " << a.ns << " " << a.dc << " " << a.mst << " " << a.hd;
            return out;
        }
};

int main(){
    NhanVien a;
    cin >> a;
    cout << a;
    return 0;
}