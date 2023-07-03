#include<bits/stdc++.h>

using namespace std;

struct Point{
	int x, y, z;
	//toa do cua 1 diem
	void input(){
		cin >> x >> y >> z;
	}
};

Point Vector(Point A, Point B){
	Point AB;
	AB.x = B.x - A.x;
	AB.y = B.y - A.y;
	AB.z = B.z - A.z;
	return AB;
	//toa do cua 1 doan
}

void check(){
	Point A, B, C, D; // toa do 3 diem A, B, C, D
	
	A.input(); B.input(); C.input(); D.input();
	
	Point AB = Vector(A, B); // toa do cua doan AB
	Point AC = Vector(A, C); // toa do cua doan AC
	Point AD = Vector(A, D); // toa do cua doan BC
	
	Point ABAC; // tich co huong [AB.AC]
	ABAC.x = AB.y * AC.z - AB.z * AC.y;
	ABAC.y = AB.z * AC.x - AB.x * AC.z;
	ABAC.z = AB.x *AC.y - AB.y * AC.x;
	
	int kt = ABAC.x * AD.x + ABAC.y * AD.y + ABAC.z * AD.z;
	if(kt == 0){
		cout << "YES";
	}else{
		cout << "NO";
	}
	cout << endl;
}


int main(){
	int t;
	cin >> t;
	while(t--){
		check();
	}	
}
