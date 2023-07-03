#include<bits/stdc++.h>

using namespace std;
void check(){
	int n, Q, l ,r;
	cin >> n >> Q;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	while(Q--){
		int sum = 0;
		cin >> l >> r;
		for(int i = l - 1; i < r; i++){
			sum += a[i];
		}
		cout << sum << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
	}
}
