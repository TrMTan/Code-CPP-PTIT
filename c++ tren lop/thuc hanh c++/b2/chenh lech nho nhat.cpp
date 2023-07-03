#include<bits/stdc++.h>

using namespace std;

void check(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	int kq = abs(a[0] - a[1]);
	for(int i = 0; i < n; i++){
		if(abs(a[i] - a[i - 1]) < kq){
			kq = abs(a[i] - a[i - 1]);
		}
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
