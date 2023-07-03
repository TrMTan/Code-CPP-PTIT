#include<bits/stdc++.h>

using namespace std;

void check(){
	int n, m;
	cin >> n >> m;
	int a[n], b[m];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < m; i++){
		cin >> b[i];
	}
	sort(a, a + n);
	sort(b, b + m);
	int min = b[0];
	int max = a[n - 1];
	cout << (long long)min * max << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
	}
}
