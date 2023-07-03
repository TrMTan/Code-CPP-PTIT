#include<bits/stdc++.h>

using namespace std;

string chuanhoa(string s){
    stringstream ss(s);
    string res = " ";
    string tmp;
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

class SinhVien{
    private:
        string msv, ht, lop, ns;
        float gpa;
    public:
        SinhVien(){
            ht = lop = ns = " ";
            gpa = 0;
        }
        friend istream& operator >> (istream& in, SinhVien &a){
            a.msv = "B20DCCN001";
            getline(cin, a.ht);
            cin >> a.lop >> a.ns >> a.gpa;
            a.ht = chuanhoa(a.ht);
            if(a.ns[1] == '/') a.ns = "0" + a.ns;
            if(a.ns[4] == '/') a.ns.insert(3, "0");
            return in;
        } 

        friend ostream& operator << (ostream& out, SinhVien a){
            cout << a.msv << " " << a.ht << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.gpa << endl;
            return out;
        }
};



int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}