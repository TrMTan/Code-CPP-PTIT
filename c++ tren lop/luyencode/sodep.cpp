#include<iostream>
#include<bits/stdc++.h>
#include<iomanip>

using namespace std;

int main(){
	long long n;
	cin >> n;
	long long tong = 0;
	while(n > 0){
		int d = n % 10;
		tong += d;
		n /= 10;
	}
	if(tong % 10 == 9){
		cout << "YES";
	}else{
		cout << "NO";
	}
}
