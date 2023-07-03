#include<bits/stdc++.h>

#define PI 3.141592653589793238

using namespace std;
void check(){
	double x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	double a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	double b = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
	double c = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
	if(a + b <= c || a + c <= b || b + c <= a){
		cout << "INVALID" << endl;;
	}else{
		double p = (a + b + c) / 2;
		double s = sqrt(p * (p - a) * (p - b) * (p - c));
		double r = a * b * c / (4 * s);
		double res = PI * r * r;
		cout << fixed << setprecision(3) << res << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
	}
}
