#include<bits/stdc++.h>

using namespace std;

string chuanhoa(string s){
    string tmp;
    string res = "";
    stringstream ss(s);
    while(ss >> tmp){
        res += toupper(tmp[0]);
    }
    return res;
}

int i = 1;

class GiangVien{
    public:
        string mgv, ht, bm, mon;
        friend istream& operator >> (istream& in, GiangVien &a){
            scanf("\n");
            getline(cin, a.ht);
            getline(cin, a.bm);
            if(i < 10) a.mgv = "GV0";
            else a.mgv = "GV";
            a.mgv = a.mgv + to_string(i);
            a.mon = chuanhoa(a.bm);
            i++;
            return in;
        }
        friend ostream& operator << (ostream& out, GiangVien a){
            cout << a.mgv << " " << a.ht << " " << a.mon << endl;
            return out;
        }
};

int main(){
    int n;
    cin >> n;
    GiangVien a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int q;
    cin >> q;
    cin.ignore();
    while(q--){
        string s;
        getline(cin, s);
        string nganh = chuanhoa(s);
        cout << "DANH SACH GIANG VIEN BO MON " << nganh << ":" << endl;
        for(int i = 0; i < n; i++){
            if(a[i].mon == nganh){
                cout << a[i];
            }
        }
    }
}


