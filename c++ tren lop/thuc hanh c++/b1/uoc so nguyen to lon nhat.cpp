#include<bits/stdc++.h>

using namespace std;

bool snt(long long n){
	if(n <= 3) return n > 1;
	else if(n % 2 == 0 || n % 3 == 0){
		return false;
	}
	long long i = 5;
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
	long long max;
	for(int i = 1; i <= sqrt(n); i++){
		if(n % i == 0){
			if(snt(n / i)){
				cout << n / i << endl;
				return;
			}
			if(snt(i)){
				max = i;
			}
		}
	}
	cout << max << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
	}
}
