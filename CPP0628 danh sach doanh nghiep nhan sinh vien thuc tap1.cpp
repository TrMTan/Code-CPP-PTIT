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
    DoanhNghiep a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n, cmp);
    for(int i = 0; i < n; i++){
        cout << a[i];
    }
}


