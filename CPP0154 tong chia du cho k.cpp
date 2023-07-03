#include<bits/stdc++.h>

using namespace std;

void check(){
	long long n, k;
	cin >> n >> k;
	long long tong = 0;
	for(int i = 1; i <= n; i++){
		tong += i % k;
	}
	if(tong == k){
		cout << "1" << endl;
	}else{
		cout << "0" << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
	}
}
