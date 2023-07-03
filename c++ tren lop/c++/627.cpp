#include<bits/stdc++.h>

using namespace std;

int i = 1;

string vh(string s){
    string tmp, res = "";
    stringstream ss(s);
    while(ss >> tmp){
        res += toupper(tmp[0]);
    }
    return res;
}

class GiangVien{
    public:
        string mgv, ht, bm, mon, ten;
        friend istream& operator >> (istream& in, GiangVien &a){
            scanf("\n");
            getline(cin, a.ht);
            getline(cin, a.bm);
            if(i < 10) a.mgv = "GV0";
            else a.mgv = "GV";
            a.mgv = a.mgv + to_string(i);
            a.mon = vh(a.bm);
            i++;
            return in;
        }
        friend ostream& operator << (ostream& out, GiangVien a){
            cout << a.mgv << " " << a.ht << " " << a.mon << endl;
            return out;
        }
};

bool tim(string name, string word){
    for(char &x : name) x = tolower(x);
    for(char &x : word) x = tolower(x);
    return (word.find(name) != -1);
}

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
        cin >> s;
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s  << ":" << endl;
        for(int i = 0; i < n; i++){
            if(tim(s, a[i].ht)){
                cout << a[i];
            }
        }
    }   
}

