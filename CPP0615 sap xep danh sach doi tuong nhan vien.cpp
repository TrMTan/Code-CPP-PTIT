#include<bits/stdc++.h>

using namespace std;

int i = 1;

class NhanVien{
	private:
		string mnv, ht, gt, ns, dc, mst, hd;
	public:
		friend bool operator < (NhanVien a, NhanVien b){
			string s = a.ns, t = b.ns;
			int t1 = (s[0] - '0') * 10 + (s[1] - '0'), ng1 = (s[3] - '0') * 10 + (s[4] - '0'), na1 = stoi(s.substr(6));
			int t2 = (t[0] - '0') * 10 + (t[1] - '0'), ng2 = (t[3] - '0') * 10 + (t[4] - '0'), na2 = stoi(t.substr(6));
			if(na1 != na2) return na1 < na2;
			if(t1 != t2) return t1 < t2;
			return ng1 < ng2;
		}
		friend ostream& operator << (ostream& out, NhanVien a){
			out << a.mnv << " " << a.ht << " " << a.gt << " " << a.ns << " " << a.dc << " " << a.mst << " " << a.hd << endl;
			return out;
		}
		friend istream& operator >> (istream& in, NhanVien &a){
			if(i < 10) a.mnv = "0000";
			else a.mnv = "000";
			a.mnv = a.mnv + to_string(i);
			cin.ignore();
			getline(in, a.ht);
			in >> a.gt >> a.ns;
			cin.ignore();
			getline(in, a.dc);
			in >> a.mst >> a.hd;
			i++;
			return in;
		}
};

void sapxep(NhanVien a[], int n){
	sort(a, a + n);
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
