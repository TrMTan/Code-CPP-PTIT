#include<bits/stdc++.h>

using namespace std;

void check(){
	int n;
	cin >> n;
	int a[n][n], b[n] = {}, c[n] = {}, s1 = 0, s2 = 0; // ma tran b luu tong hang, ma tran c luu tong cot.
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
			b[i] += a[i][j];
			c[j] += a[i][j];
		}
		for(int i = 0; i < n; i++){
			s1 = max(s1, max(b[i], c[i])); // tim phan tu lon nhat giua hang va cot
		}
	}
	for(int i = 0, j = 0; i < n && j < n;){
		int k = min(s1 - b[i], s1 - c[j]);
		a[i][j] += k;
		b[i] += k;
		c[j] += k;
		s2 += k;
		if(b[i] == s1) i++;
		if(c[j] == s1) j++;
	}
	cout << s2 << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
	}
}
