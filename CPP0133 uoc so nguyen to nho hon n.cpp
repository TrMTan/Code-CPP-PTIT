#include<bits/stdc++.h>

using namespace std;

bool snt(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}

void check(){
	int n;
	cin >> n;
	for(int i = 2; i <= n; i++){
		if(snt(i)){
			cout << i << " ";
		}
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
	}
}
