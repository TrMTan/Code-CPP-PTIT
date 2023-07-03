#include<bits/stdc++.h>

using namespace std;

void check(){
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	long long kq = 0;
	for(int i = 0; i < n; i++){
		int p = upper_bound(a + i + 1, a + n, a[i] + k - 1) - (a + i + 1);
		kq += p;
	}
	cout << kq << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
	}
}
