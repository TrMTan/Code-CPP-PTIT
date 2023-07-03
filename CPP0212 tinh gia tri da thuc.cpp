#include<bits/stdc++.h>

using namespace std;

const int mod = 1000000007;

void check(){
	int n, x;
	cin >> n >> x;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	long long luythua = 1, kq = 0;
	for(int i = n - 1; i >= 0; i--){
		kq += a[i] * luythua;
		kq %= mod;
		luythua *= x;
		luythua %= mod;
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
