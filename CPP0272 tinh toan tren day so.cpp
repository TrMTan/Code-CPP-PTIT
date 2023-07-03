#include<bits/stdc++.h>

using namespace std;

const int mod = 1e9 + 7;

void check(){
	int n;
	cin >> n;
	long long a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	long long h = a[0], g = a[0];
	for(int i = 1; i < n; i++){
		h = h * a[i] % mod;
		g = __gcd(g, a[i]);
	}
	long long kq = 1;
	for(int i = 1; i <= g; i++){
		kq = kq * h % mod;
	}
	cout << kq << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
	}
}
