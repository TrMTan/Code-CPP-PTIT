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
	int dem = 0;
	for(int i = 0; i < n - 1; i++){
		if(a[i] != a[i + 1]){
			if(a[i] + 1 != a[i + 1]){
				dem += abs(a[i] + 1 - a[i + 1]);
			}
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
