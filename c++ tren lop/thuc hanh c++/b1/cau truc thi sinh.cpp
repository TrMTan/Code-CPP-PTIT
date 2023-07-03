#include<bits/stdc++.h>

using namespace std;

struct ThiSinh{
	string ht, ns;
	float d1, d2, d3;
	
};

void nhap(ThiSinh &a){
	getline(cin, a.ht);
	cin >> a.ns;
	cin >> a.d1 >> a.d2 >> a.d3;
}

void in(ThiSinh a){
	cout << a.ht << " " << a.ns << " " << fixed << setprecision(1) << (a.d1 + a.d2 + a.d3) << endl;
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
