#include<bits/stdc++.h>

using namespace std;

void check(){
	int k, n;
	cin >> k >> n;
	int m = k * n;
	int a[m];
	for(int i = 0; i < m; i++){
		cin >> a[i];
	}
	sort(a, a + m);
	for(int i = 0; i < m; i++){
		cout << a[i] << " ";
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
