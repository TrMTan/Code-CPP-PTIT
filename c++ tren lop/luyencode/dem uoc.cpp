#include<iostream>
#include<bits/stdc++.h>
#include<iomanip>

using namespace std;

int uoc(long long n){
	int dem = 1;
	for(int i = 2; i <= sqrt(n); i++){
		int cnt = 0;
		while(n % i == 0){
			++cnt;
			n /= i;
		}
		dem *= (cnt + 1);
	}
	if(n != 1){
		dem *= 2;
	}
	return dem;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	long long n;
	cin >> n;
	cout << uoc(n);
}

