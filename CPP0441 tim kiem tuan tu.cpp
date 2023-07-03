#include<bits/stdc++.h>

using namespace std;

void check(){
	int n, x;
	cin >> n >> x;
	int a[n];
	int dem = -1;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		if(a[i] == x){
			dem = i;
			cout << dem + 1 << endl;
			return;
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
