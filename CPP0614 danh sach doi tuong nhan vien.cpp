#include<bits/stdc++.h>

using namespace std;

int i = 1;

class NhanVien{
	private:
		string mnv, ht, gt, ns, dc, mst, hd;
	public:
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

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
