#include<bits/stdc++.h>

using namespace std;

bool snt(int n){
	if(n <= 3) return n > 1;
	else if(n % 2 == 0 || n % 3 == 0){
		return false;
	}
	int i = 5;
	while(i * i <= n){
		if(n % i == 0 || n % (i + 2) == 0){
			return false;
		}
		i += 6;
	}
	return true;
}
bool sotang(int n){
	while(n >= 10){
		int r = n % 10;
		if(r <= (n / 10) % 10){
			return 0;
		}
		n /= 10;
	}
	return 1;
}

bool sogiam(int n){
	while(n >= 10){
		int r = n % 10;
		if(r >= (n / 10) % 10){
			return 0;
		}
		n /= 10;
	}
	return 1;
}
void check(){
	int n;
	cin >> n;
	int dem = 0;
	int l = pow(10, n - 1);
	int r = pow(10, n) - 1;
	for(int i = l; i <= r; i++){
		if(sotang(i) || sogiam(i)){
			if(snt(i)){
				dem++;
			}
		}
	}
	cout << dem << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
	}
}
