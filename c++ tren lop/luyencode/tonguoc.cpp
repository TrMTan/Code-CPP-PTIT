#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int uoc(int n){
	int tong = 0;
	int c = sqrt(n);
	for(int i = 1; i <= c; i++){
		if(n % i == 0){
			tong += i;
			if(n / i != i){
				tong += n/i;
			}
		}
	}
	return tong;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	long long a, b;
	cin >> a >> b;
	cout <<uoc(__gcd(a, b));
}
