#include <iostream>
using namespace std;

class PhanSo{
	private:	
		int tu;
		int mau;
	public:
//		PhanSo(){
//			tu=1, mau=1;
//		}
		void NhapPS();
		void InPS();
		void Cong(PhanSo);
};

void PhanSo::NhapPS(){
	cout<<"Nhap tu so = "; cin>>tu;
	cout<<"Nhap mau so = "; cin>>mau;
}
void PhanSo::InPS(){
	cout<<"Phan so vua nhap ("<<tu<< "/"<< mau <<")";
}
void PhanSo::Cong(PhanSo p1)
{
	PhanSo p;
	p.tu=tu*p1.mau+p1.tu*mau;
	p.mau=mau*p1.mau;
	cout<<"\nTong 2 phan so:"<<p.tu<<"/"<<p.mau;
}
int main(){
	PhanSo p1,p2,p;
	p1.NhapPS();
	p1.InPS();
	cout<<"\n";
	p2.NhapPS();
	p2.InPS();
	p1.Cong(p2);
	
	return 0;
}
