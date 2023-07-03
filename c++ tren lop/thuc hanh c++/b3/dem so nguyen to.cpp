#include<bits/stdc++.h>

using namespace std;

int snt(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return 0;
		}
	}
	return n > 1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int l, r;
		cin >> l >> r;
		int dem = 0;
		for(int i = l; i <= r; i++){
			if(snt(i)){
				dem++;
			}
		}
		cout << dem << endl;
	}
}
