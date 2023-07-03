#include <iostream>
#include <math.h>
using namespace std;
class Point;
class Tamgiac;
class Point{
	private:	
		int x;
		int y;
	public:
		Point(){
			x=0, y=0;
		}
		void InIt();
		void Print();
		friend float Khoangcach(Point,Point);
		friend class Tamgiac;

};
void Point::InIt(){
	cout<<"\nNhap x = "; cin>>x;
	cout<<"Nhap y = "; cin>>y;
}
void Point::Print(){
	cout<<"("<<x<< ","<< y <<")";
}
float Khoangcach(Point p1, Point p2){
	float dd;
	dd= sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
	return dd;
	}
class Tamgiac{
	private:
		Point A,B,C;
	public:
		void InIt();
		void Print();
		void Canh();
		float Chuvi();//phuong thuc tinh chu vi
		friend float CV(Tamgiac);//ham ban tinh chu vi
};
float CV(Tamgiac T){// Tinh chu vi bang ham ban
	float a,b,c;
	a= Khoangcach(T.C,T.B);
	b= Khoangcach(T.A,T.C);
	c= Khoangcach(T.A,T.B);
	return a+b+c;
}
float Tamgiac::Chuvi(){// tinh chu vi bang phuong thuc
	float a,b,c;
	a= Khoangcach(C,B);
	b= Khoangcach(A,C);
	c= Khoangcach(A,B);
	return a+b+c;
	
}
void Tamgiac::Canh(){
	cout<<"\nDo dai canh AB=";cout<<Khoangcach(A,B);
	cout<<"\nDo dai canh AC=";cout<<Khoangcach(A,C);
	cout<<"\nDo dai canh BC=";cout<<Khoangcach(C,B);
}
void Tamgiac::InIt(){
	cout<<"Nhap toa do 3 diem";
	cout<<"\nNhap toa do diem A";
	A.InIt();
	cout<<"\nNhap toa do diem B";
	B.InIt();
	cout<<"\nNhap toa do diem C";
	C.InIt();
}
void Tamgiac::Print(){
	cout<<"Tam giac vua nhap co toa do 3 diem la";
	cout<<"\nA=";A.Print();
	cout<<"\nB=";B.Print();
	cout<<"\nC=";C.Print();
}

int main(){

	Tamgiac T;
	T.InIt();
	T.Print();
	cout<<"\nDo dai 3 canh tam giac:";
	T.Canh();
	cout<<"\nChu vi tam giac(dung phuong thuc):"<<T.Chuvi();
	cout<<"\nChu vi tam giac(dung ham ban):"<<CV(T);
	return 0;
}
