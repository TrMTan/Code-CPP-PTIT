#include<bits/stdc++.h>
#include<iomanip>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	double tong = 0;
	for(int i = 1; i <= n; ++i){
		tong += 1.0 / i;
	}
	cout << fixed << setprecision(4) << tong;
	return 0;
}
