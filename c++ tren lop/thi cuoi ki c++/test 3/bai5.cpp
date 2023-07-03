#include<bits/stdc++.h>

using namespace std;

class NhanVien{
	private:
		string mnv, ht, ns;
		int ngay, luongcb;
	public:
		string getManv(){
			return this->mnv;
		}
		int getNgay(){
			return this->ngay;
		}
		int getLuongcb(){
			return this->luongcb;
		}
		void chuanhoans(){
			if(ns[1] == '/') ns = "0" + ns;
			if(ns[4] == '/') ns.insert(3, "0"); 
		}
		string chucvu(){
			string tmp = this->mnv.substr(0, 2); // lay 2 ky tu dau cua ma nv
			if(tmp == "GD") return "Giam doc";
			if(tmp == "TP") return "Truong phong";
            if(tmp == "NV") return "Nhan vien";
            return "Pho giam doc";
		}
		int luongcung(){
			return getNgay() * getLuongcb();
		}
		int phucap(){
			string chucvu = this->mnv.substr(0, 2);
			if(chucvu == "GD") return 2000000;
			if(chucvu == "TP") return 500000;
			if(chucvu == "NV") return 200000;
			return 1000000;
		}
		int thuong(){
			if(getNgay() >= 27) return luongcung() * 0.2;
			if(getNgay() >= 25) return luongcung() * 0.1;
			return 0;
		}
		int thunhap(){
			return luongcung() + phucap() + thuong();
		}
		friend istream& operator >> (istream& in, NhanVien &a){
			cin >> a.mnv;
			cin.ignore();
			getline(cin, a.ht);
			cin >> a.ns >> a.ngay >> a.luongcb;
			a.chuanhoans();
			return in;
		}
		friend ostream& operator << (ostream& out, NhanVien a){
			cout << a.mnv << " " << a.ht << " " << a.chucvu() << " " << a.ns << " " << a.ngay << " " << a.luongcb << " " << a.thunhap();
			return out;
		}
		bool operator < (NhanVien a);
};

bool NhanVien::operator < (NhanVien a){
	if(this->thunhap() != a.thunhap()){
		return this->thunhap() > a.thunhap();
	}
	return this->getManv() < a.getManv(); 
}

int main(){
	int n;
	cin >> n;
	NhanVien a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	for(int i = 0; i < n; i++){
		cout << a[i] << endl;
	}
}
