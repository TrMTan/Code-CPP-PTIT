#include<bits/stdc++.h>

using namespace std;

int i = 1;

class SinhVien{
	private:
		string msv, ht, lop, ns;
		float gpa;
	public:
		SinhVien(){
			msv = ht = lop = ns = " ";
			gpa = 0;
		}
		friend ostream& operator << (ostream& os, SinhVien a){
			os << a.msv << " " << a.ht << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.gpa << endl;
			return os;
		}
		friend istream& operator >> (istream& is, SinhVien &a){
			if(i < 10){
				a.msv = "B20DCCN00";
			}else{
				a.msv = "B20DCCN0";
			}
			a.msv = a.msv + to_string(i);
			is.ignore();
			getline(is, a.ht);
			is >> a.lop >> a.ns >> a.gpa;
			if(a.ns[1] == '/') a.ns = '0' + a.ns;
			if(a.ns[4] == '/') a.ns.insert(3, "0");
			i++;
			return is;
		}
		
};

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}

