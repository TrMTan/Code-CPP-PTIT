#include<bits/stdc++.h>

using namespace std;

class DoanhNghiep{
    public:
        string ma, ten;
        int sl;
        friend istream& operator >> (istream& in, DoanhNghiep &a){
            scanf("\n");
            getline(cin, a.ma);
            getline(cin, a.ten);
            cin >> a.sl;
            return in;
        }
        friend ostream& operator << (ostream& out, DoanhNghiep a){
            cout << a.ma << " " << a.ten << " " << a.sl << endl;
            return out;
        }
};

bool cmp(DoanhNghiep a, DoanhNghiep b){
    if(a.sl == b.sl){
        return a.ma < b.ma; 
    }
    return a.sl > b.sl;
}

int main(){
    int n;
    cin >> n;
    DoanhNghiep x[n];
    for(int i = 0; i < n; i++){
        cin >> x[i];
    }
    sort(x, x + n, cmp);
    int q;
    cin >> q;
    while (q--){
        int a, b;
        cin >> a >> b;
        cout << "DANH SACH DOANH NGHIEP NHAN TU " << a << " DEN " << b << " SINH VIEN:" << endl;  
        for(int i = 0; i < n; i++){
            if(x[i].sl >= a && x[i].sl <= b) 
                cout << x[i];
        }
    }
}

