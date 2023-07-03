#include <iostream>
using namespace std;
class DaThuc{
	private:	
		int bac;
		int *heSo;
	public:
		DaThuc(){
			bac=0;
			heSo=new int[bac];
		}
		~DaThuc(){
			bac=0;
			delete heSo;
		}
		void nhap();
		void in();
		DaThuc Cong(DaThuc);

};

void DaThuc::nhap(){
	cout<<"Nhap bac cua da thuc:"; 
	cin>>bac;
	cout<<"Nhap he so:\n";
	for (int i=0; i<=bac;i++){
		cout<<"Nhap he so bac "<<i<<"=";
		cin>>heSo[i];
	} 
}
void DaThuc::in(){
	if (heSo[0]!=0)
		cout<<heSo[0]<<"+";
	if (heSo[1]!=0)
		cout<<heSo[1]<<"*x"<<"+";
	for (int i=2; i<=bac-1;i++){
		if (heSo[i]!=0)
			cout<<heSo[i]<<"*x^"<<i<<"+";
	} 
	if (heSo[bac]!=0)
		cout<<heSo[bac]<<"*x^"<<bac;
}

DaThuc DaThuc:: Cong(DaThuc P)
{
	DaThuc tong;
	if (bac<=P.bac) 
	{
		tong.bac=P.bac;
		for (int i=0;i<=bac;i++)
			tong.heSo[i]=heSo[i]+P.heSo[i];
		for (int j=bac+1;j<=P.bac;j++)
			tong.heSo[j]=P.heSo[j];	
	}
	else 
	{
		tong.bac=bac;
		for (int i=0;i<=P.bac;i++)
			tong.heSo[i]=heSo[i]+P.heSo[i];
		for (int j=P.bac+1;j<=bac;j++)
			tong.heSo[j]=heSo[j];	
	}
	return tong;
}

int main(){
	DaThuc A,B,C;
	cout<<"Nhap da thuc so 1:\n";
	A.nhap();
	A.in();
	cout<<"\nNhap da thuc so 2:\n";
	B.nhap();
	B.in();
	C=A.Cong(B);
	cout<<"\nTong 2 da thuc:";
	C.in();
	return 0;
}
