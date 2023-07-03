#include<bits/stdc++.h>

using namespace std;

void check(){
	int n;
	cin >> n;
	int a[n], b[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	b[n - 1] = a[n - 1];
	int l = 0, r = 0;
	int kq = INT_MIN;
	for(int i = n - 2; i >= 0; i--){
		b[i] = max(b[i + 1], a[i]);
	} 
	while(l < n && r < n){
		if(a[l] <= b[r]){
			kq = max(kq, abs(l - r));
			++r;
		}
		else ++l;
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
