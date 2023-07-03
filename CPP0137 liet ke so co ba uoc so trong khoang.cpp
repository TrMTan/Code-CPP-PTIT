#include<bits/stdc++.h>

using namespace std;

bool snt(int n){
	if(n <= 3) return n >1;
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

void check(){
	int dem = 0;
	long long l, r;
	cin >> l >> r;
	l = ceil(sqrt(l));
	r = floor(sqrt(r));
	for(int i = l; i <= r; i++){
		if(snt(i)){
			dem++;
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
