#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		double a1, a2, b1, b2;
		cin >> a1 >> a2 >> b1 >> b2;
		cout << fixed << setprecision(4) << sqrt(pow(b1 - a1, 2) + pow(b2 - a2, 2)) << endl;
	}
}
