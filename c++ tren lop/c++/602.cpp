#include<bits/stdc++.h>

using namespace std;

class SinhVien{
    private:
        string msv, ht, lop, ns;
        float gpa;
    public:
        SinhVien(){
            msv = ht = lop = ns = " ";
            gpa = 0;
        }
        friend ostream& operator << (ostream &out, SinhVien a){
            out << a.msv << " " << a.ht << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.gpa << endl;
            return out;
        }
        friend istream& operator >> (istream &is, SinhVien &a){
            a.msv = "B20DCCN001";
            getline(cin, a.ht);
            cin >> a.lop >> a.ns >> a.gpa;
            if(a.ns[1] == '/'){
                a.ns = '0' + a.ns;
            }
            if(a.ns[4] == '/'){
                a.ns = a.ns.insert(3, "0");
            }
            return is;
        }
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}