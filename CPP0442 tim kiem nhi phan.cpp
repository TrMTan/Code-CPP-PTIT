#include<bits/stdc++.h>

using namespace std;

int timkiemnhiphan(int a[], int n, int x){
	for(int i = 0; i < n; i++){
		if(a[i] == x){
			return 1;
		}
	}
	return -1;
}

void check(){
	int n, x;
	cin >> n >> x;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	cout << timkiemnhiphan(a, n, x) << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
	}
}
