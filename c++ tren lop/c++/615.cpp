#include<bits/stdc++.h>

using namespace std;

int i = 1;

class NhanVien{
    private:
        string mnv, ht, gt, ns, dc, mst, hd;
    public:
        string getNs(){
            return this->ns;
        }
        friend istream& operator >> (istream& in, NhanVien &a){
            if(i < 10) a.mnv = "0000";
            else a.mnv = "000";
            a.mnv = a.mnv + to_string(i);
            cin.ignore();
            getline(cin, a.ht);
            cin >> a.gt >> a.ns;
            cin.ignore();
            getline(cin, a.dc);
            cin >> a.mst >> a.hd;
            i++;
            return in;
        }
        friend ostream& operator << (ostream& out, NhanVien a){
            cout << a.mnv << " " << a.ht << " " << a.gt << " " << a.ns << " " << a.dc << " " << a.mst << " " << a.hd << endl; 
            return out;
        }
};

bool cmp(NhanVien a, NhanVien b){
    string s1 = a.getNs(), s2 = b.getNs();
    int th1 = (s1[0] - '0') * 10 + (s1[1] - '0'), ng1 = (s1[3] - '0') * 10 + (s1[4] - '0'), na1 = stoi(s1.substr(6)); 
    int th2 = (s2[0] - '0') * 10 + (s2[1] - '0'), ng2 = (s2[3] - '0') * 10 + (s2[4] - '0'), na2 = stoi(s2.substr(6)); 
    if(na1 != na2) return na1 < na2;
    if(th1 != th2) return th1 < th2;
    return ng1 < ng2;
}

void sapxep(NhanVien a[], int n){
    sort(a, a + n, cmp);
}

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}


