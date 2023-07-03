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

void check(){
	long long n;
	cin >> n;
	int dem = 0;
	for(int i = 2; i <= sqrt(n); i++){
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
