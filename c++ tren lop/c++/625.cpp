#include<bits/stdc++.h>

using namespace std;

int i = 1;
string chuanhoa(string s){ // monhoc
    string tmp;
    string res = "";
    stringstream ss(s);
    while(ss >> tmp){
        res += toupper(tmp[0]);
    }
    return res;
}

string layten(string s){
    string tmp;
    string res = "";
    stringstream ss(s);
    while(ss >> tmp){
        res = tmp;
    }
    return res;
}

class GiangVien{
    public:
        string mgv, ht, bm, ten, mon;
        friend istream& operator >> (istream& in, GiangVien &a){
            scanf("\n");
            getline(cin, a.ht);
            getline(cin, a.bm);
            a.mon = chuanhoa(a.bm);
            a.ten = layten(a.ht);
            if(i < 10) a.mgv = "GV0";
            else a.mgv = "GV";
            a.mgv = a.mgv + to_string(i);
            i++;
            return in;
        }
        friend ostream& operator << (ostream& out, GiangVien a){
            cout << a.mgv << " " << a.ht << " " << a.mon << endl;
            return out;
        }

};

bool cmp(GiangVien a, GiangVien b){
    if(a.ten == b.ten){
        return a.mgv < b.mgv;
    }
    return a.ten < b.ten;
}

int main(){
    int n;
    cin >> n;
    GiangVien a[100];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n, cmp);
    for(int i = 0; i < n; i++){
        cout << a[i];
    }
}

