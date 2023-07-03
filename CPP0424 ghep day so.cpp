#include<bits/stdc++.h>

using namespace std;

void check(){
	int k, n;
	cin >> k >> n;
	int a[k * n];
	for(int i = 0; i < k * n; i++){
		cin >> a[i];
	} 
	sort(a, a + n * k);
	for(int i = 0 ; i < n * k; i++){
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
