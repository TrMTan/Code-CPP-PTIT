#include<bits/stdc++.h>

using namespace std;

class SinhVien{
    private:
        string msv, ht, lop, email;
    public:
        string getLop(){
            return this->lop;
        }
        string getMsv(){
            return this ->msv;
        }
        friend istream& operator >> (istream& in , SinhVien &a){
            scanf("\n");
            getline(cin, a.msv);
            getline(cin, a.ht);
            getline(cin, a.lop);
            getline(cin, a.email);
            return in;
        }
        friend ostream& operator << (ostream& out , SinhVien a){
            cout << a.msv << " " << a.ht << " " << a.lop << " " << a.email << endl;
            return out;
        }
        friend bool operator < (SinhVien a, SinhVien b){
            return a.msv < b.msv;
        }
};

void viethoa(string &s){
    for(int i = 0; i < s.size(); i++){
        s[i] = toupper(s[i]);
    }
}

int main(){
    int n;
    cin >> n;
    SinhVien a[1000];
    map<string, vector<SinhVien>> mp;
    for(int i = 0; i < n; i++){
        SinhVien x;
        cin >> x;
        mp[x.getMsv().substr(5, 2)].push_back(x); // lay ra ten nganh tu ma sv
    }
    int q;
    cin >> q;
    cin.ignore();
    while (q--){
        string s;
        getline(cin, s);
        viethoa(s);
        cout << "DANH SACH SINH VIEN NGANH " << s << ":" << endl;
        if(s == "KE TOAN"){
            for(SinhVien x : mp["KT"]){
                cout << x;
            }
        }else if(s == "CONG NGHE THONG TIN"){
            for(SinhVien x : mp["CN"]){
                if(x.getLop().find("E") == string::npos){ // ktra neu khong co chu E trong lop
                    cout << x;
                }
            }
        }else if(s == "AN TOAN THONG TIN"){
            for(SinhVien x : mp["AT"]){
                if(x.getLop().find("E") == string::npos){ // ktra neu khong co chu E trong lop
                    cout << x;
                }
            }
        }else if(s == "VIEN THONG"){
            for(SinhVien x : mp["VT"]){
                cout << x;
            }
        }else if(s == "DIEN TU"){
            for(SinhVien x : mp["DT"]){
                cout << x;
            }
        } 
    }
}

