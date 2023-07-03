#include<bits/stdc++.h>

using namespace std;

void timkiemtrongdaysapxepvong(){
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int so;
	for(int i = 0; i < n; i++){
		if(a[i] == k){
			so = i + 1;
		}
	}
	cout << so << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		timkiemtrongdaysapxepvong();
	}
}
