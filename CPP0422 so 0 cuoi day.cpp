#include<bits/stdc++.h>

using namespace std;

void check(){
	int n;
	cin >> n;
	long long a[n];
	int dem = 0;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		if(a[i] != 0){
			cout << a[i] << " ";
		}
		if(a[i] == 0){
			dem++;
		}
	}
	for(int i = 1; i <= dem; i++){
		cout << "0" << " ";
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
