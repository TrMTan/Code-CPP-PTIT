#include<bits/stdc++.h>

using namespace std;

void check(){
	int n, hieu = -1;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(a[j] - a[i] > 0){
				hieu = max(hieu, a[j] - a[i]);
			}
		}
	}
	cout << hieu << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
	}
}
