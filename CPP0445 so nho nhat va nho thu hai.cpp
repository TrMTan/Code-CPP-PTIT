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
	for(int i = 0; i < n; i++){
		if(a[0] == a[1]){
			cout << "-1" << endl;
			return;
		}
	}
	cout << a[0] << " " << a[1] << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
	}
}
