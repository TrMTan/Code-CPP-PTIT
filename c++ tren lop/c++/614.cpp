#include<bits/stdc++.h>

using namespace std;

int i = 1;

class NhanVien{
    private:
        string mnv, ht, gt, ns, dc, mst, hd;
    public:
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

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}


