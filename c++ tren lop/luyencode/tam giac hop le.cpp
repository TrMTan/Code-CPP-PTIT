#include<iostream>
#include<bits/stdc++.h>
#include<iomanip>

using namespace std;
int main(){
	double a, b, c;
	double s, p;
	cin >> a >> b >> c;
	if(a + b > c && a + c > b && b + c > a){
		p = a + b + c;
		s = sqrt(p/2*(p/2 - a)*(p/2 - b)*(p/2 - c));
		cout << p << " ";
		cout << fixed << setprecision(2) << s;
	}else{
		cout << "NO";
	} 
}
