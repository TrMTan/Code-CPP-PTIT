#include<bits/stdc++.h>

using namespace std;

bool snt(long long n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
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
