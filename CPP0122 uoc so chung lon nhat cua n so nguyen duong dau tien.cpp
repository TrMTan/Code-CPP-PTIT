#include<bits/stdc++.h>

using namespace std;

long long ucln(long long a, long long b){
	while(b != 0){
		long long x = a % b;
		a = b;
		b = x;
	}
	return a;
}


int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		long long tich = 1;
		for(long long i = 1; i <= n; i++){
			long long g = ucln(tich, i);
			tich = tich * i / g;
		}
		cout << tich << endl;
	}
}
